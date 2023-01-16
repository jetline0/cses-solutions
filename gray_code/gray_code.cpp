/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

void print_gray(int curr, int padding, vector<string> &v) {
    if (curr == 1) {
        string start1 = string(padding, '0');
        string start2 = string(padding, '0');
        start2[padding-1] = '1';
        v.push_back(start1);
        v.push_back(start2);
        cout << start1 << "\n";
        cout << start2 << "\n";
        print_gray(curr+1, padding, v);
        return;
    }
    if (curr > padding) {
        return;
    }
    int j = 1 << (curr - 1);
    for (int i = j - 1; i >= 0; i--) {
        string s = v[i];
        s[padding - curr] = '1';
        cout << s << "\n";
        v.push_back(s);
    }
    print_gray(curr+1, padding, v);
    return;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    vector<string> v;
    print_gray(1, n, v);
    return 0;
}

