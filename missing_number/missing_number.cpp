/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    ull t; cin >> t;
    ull t_sum = t * (t+1) / 2;
    t = t-1;
    while (t--) {
        ull temp; cin >> temp;
        t_sum -= temp;
    }
    cout << t_sum;
    return 0;
}

