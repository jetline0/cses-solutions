/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll solve(vector<int> &v, int curr_i, ll tot, ll sum, ll min_val) {
    if (curr_i == v.size()) {
        return min(min_val, abs(tot - 2 * sum));
    }
    else {
        // include v[curr_i]
        ll with = solve(v, curr_i+1, tot, sum - v[curr_i], min_val);
        // exclude v[curr_i]
        ll without = solve(v, curr_i+1, tot, sum, min_val);
        return min(with, without);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = accumulate(v.begin(), v.end(), (ll)0);
    cout << solve(v, 0, sum, sum, sum) << "\n";
    return 0;
}
