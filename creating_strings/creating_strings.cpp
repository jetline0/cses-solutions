/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    string s; cin >> s;
    // print s.size()!
    vector <string> ss;
    sort(s.begin(), s.end());
    do {
        ss.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ss.size() << "\n";
    for (auto &s : ss) {
        cout << s << "\n";
    }
    return 0;
}

