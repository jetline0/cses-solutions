/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    string s; cin >> s;
    int odd_ct = 0; // needs to be 0 or 1
    map <char, int> m;
    for (char c : s) {
        if (!m.count(c)) m.insert({c, 0});
        m[c]++;
    }
    string middle = "";
    for (auto &p : m) {
        if (p.second % 2) {
            odd_ct++;
            middle = string(p.second, p.first);
        }
        if (odd_ct > 1) {
            cout << "NO SOLUTION\n";
            return 0;
        }
    }
    // start adding around the middle
    for (auto &p : m) {
        if (p.second % 2 == 0) {
            middle += string(p.second / 2, p.first);
            string temp = string(p.second / 2, p.first) + middle;
            middle = temp;
        }
    }
    cout << middle << "\n";
    return 0;
}

