/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int q; cin >> q;
    while (q--) {
        ll qi; cin >> qi;
        ll d = 0;
        ll d10 = 10;
        ll nth, dig;
        while (qi > 0) {
            d++;
            if (qi - d * (d10 - d10 / 10) <= 0) {
                nth = (qi - 1) / d;
                dig = (qi - 1) % d;
            }
            qi -= d * (d10 - d10 / 10);
            d10 *= 10;
        }
        ll num;
        num = d10/100 + nth;
        cout << to_string(num)[dig] << "\n";
    }
    return 0;
}

