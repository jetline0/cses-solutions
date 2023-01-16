/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll min_val;

void solve(vector<ll> &v, int curr_i, ll tot, ll sum) {
    if (curr_i == v.size()) {
        if (sum > tot - sum) {
            min_val = min(min_val, sum - (tot - sum));
        }
        else {
            min_val = min(min_val, (tot - sum) - sum);
        }
    }
    else {
        // include v[curr_i]
        solve(v, curr_i+1, tot, sum + v[curr_i]);
        // exclude v[curr_i]
        solve(v, curr_i+1, tot, sum);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    vector <ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = accumulate(v.begin(), v.end(), (ll)0);
    min_val = sum;
    solve(v, 0, sum, 0);
    cout << min_val << "\n";
    return 0;
}

