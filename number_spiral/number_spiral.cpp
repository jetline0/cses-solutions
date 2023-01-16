/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ham(ll y, ll x, ll a, ll b) {
    return abs(y - a) + abs(x - b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int t; cin >> t;
    while (t--) {
        ll x, y; cin >> y >> x;
        ll n = max(x, y);
        if (n % 2) {
            cout << ((n-1) * (n-1) + 1) + ham(y, x, n, 1) << "\n";
        }
        else {
            cout << ((n-1) * (n-1) + 1) + ham(y, x, 1, n) << "\n";
        }
    }
    return 0;
}

