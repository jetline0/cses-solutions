/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
//#define ull unsigned long long
#define ll long long

int dirx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int diry[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

ll count(int n, int x, int y) {
    ll ct = 0;
    for (int i = 0; i < 8; i++) {
        int newx = x + dirx[i];
        int newy = y + diry[i];
        if (0 <= newx && newx < n && 0 <= newy && newy < n) {
            ct++;
//          cout << "x: " << x << "\n";
//          cout << "y: " << y << "\n";
//          cout << "new x: " << newx << "\n";
//          cout << "new y: " << newy << "\n";
        }
    }
    return ct;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    ll n; cin >> n;
    vector <ll> tots(n+1, 0);
    for (int i = 1; i <= n; i++) {
        ll tot = tots[i-1];
        for (int j = 0; j < i-1; j++) {
            tot += 2 * count(i, i-1, j);
        }
        if (tot >= 3) tot -= 2;
        tot += count(i, i-1, i-1);
        tots[i] = tot;
    }
    for (ll i = 1; i <= n; i++) {
        cout << tots[i] << "\n";
//      cout << (i * i) * (i * i - 1) / 2 - tots[i] << "\n";
    }
    return 0;
}

