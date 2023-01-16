/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
//#define ull unsigned long long
#define ll long long

int dirx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int diry[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    ll n; cin >> n;
    vector <ll> tots(n+1, 0);
    for (ll i = 1; i <= n; i++) {
        if (i > 1) tots[i] = tots[i-1] + 8 * (i - 2);
        cout << (i * i) * (i * i - 1) / 2 - tots[i] << "\n"; 
    }
//  for (int i = 1; i <= n; i++) {
//      ll tot = tots[i-1];
//      for (int j = 0; j < i-1; j++) {
//          tot += 2 * count(i, i-1, j);
//      }
//      if (tot >= 3) tot -= 2;
//      tot += count(i, i-1, i-1);
//      tots[i] = tot;
//  }
//  for (ll i = 1; i <= n; i++) {
//      cout << tots[i] << "\n";
//      cout << (i * i) * (i * i - 1) / 2 - tots[i] << "\n";
//  }
    return 0;
}

