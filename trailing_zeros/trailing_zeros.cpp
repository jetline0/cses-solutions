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
    int a = 0; int b = 0;
    ull val = 2;
    for (int i = 0; i < 30; i++) {
        a += n / val;
        val *= 2;
    }
    val = 5;
    for (int i = 0; i < 13; i++) {
        b += n / val;
        val *= 5;
    }
    cout << min(a,b) << "\n";
    return 0;
}

