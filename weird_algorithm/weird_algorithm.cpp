/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    ull n; cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2) {
            n = 3 * n + 1;
        }
        else {
            n = n / 2;
        }
        cout << n << " ";
    }
    return 0;
}

