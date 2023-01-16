/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    string s;
    cin >> s;
    int longest = 1;
    int curr = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            curr++;
        }
        else {
            longest = max(curr, longest);
            curr = 1;
        }
    }
    longest = max(curr, longest);
    cout << longest;
    return 0;
}

