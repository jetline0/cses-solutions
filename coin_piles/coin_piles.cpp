/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if ((2 * a - b) < 0 || (2 * a - b) % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        ll y = (2 * a - b) / 3;
        if (b - y < 0 || (b - y) % 2) {
            cout << "NO\n";
            continue;
        }
        ll x = (b - y) / 2;
        if (a == x + 2 * y && b == 2 * x + y) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}

