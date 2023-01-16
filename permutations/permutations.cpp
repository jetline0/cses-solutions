/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    if (n > 1 && n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    int start = n/2 + 1;
    for (int i = 0; i < n; i++) {
        cout << start << " ";
        if (i % 2 == 0) start -= n/2;
        else start += n/2+1;
    }
    return 0;
}

