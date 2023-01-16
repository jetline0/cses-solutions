/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    ull val = 1;
    while (n > 0) {
        if (n > 32) {
            val = val << 32;
            val %= (ull)1e9+7;
            n -= 32;
        }
        else {
            val = val << n;
            val %= (ull)1e9+7;
            n = 0;
        }
    }
    cout << val << "\n";
    return 0;
}

