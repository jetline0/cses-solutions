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
    ull sum = (ull)n * (ull)(n+1) / 2;
    if (sum % 2) {
        cout << "NO\n";
        return 0;
    }
    ull target = sum / 2;
    set <int> s;
    for (int i = n; i > 0; i--) {
        if (i > target) continue;
        else if (i == target) {
            s.insert(i);
            cout << "YES\n";
            cout << s.size() << "\n";
            for (auto &i : s) cout << i << " ";
            cout << "\n";
            cout << n - s.size() << "\n";
            for (int i = 1; i <= n; i++) {
                if (!s.count(i)) cout << i << " ";
            }
            return 0;
        }
        else {
            target -= i; s.insert(i);
        }
    }
    cout << "NO\n";
    return 0;
}

