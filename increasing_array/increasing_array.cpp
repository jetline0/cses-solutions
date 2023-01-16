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
    int max_x = 0;
    ull inc = 0;
    while (n--) {
        int x; cin >> x;
        max_x = max(max_x, x);
        if (x < max_x)
            inc += max_x - x;
    }
    cout << inc;
    return 0;
}

