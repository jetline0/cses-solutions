/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool solve(int curr, int n, ull sum, set<int>& s) {
    if (curr > n) return false;
    if (sum == 0) {
        return true;
    }
    else {
        if (sum == curr) {
            s.insert(curr);
            return true;
        }
        if (sum < curr) return false;
        if (solve(curr+1, n, sum - curr, s)) {
            s.insert(curr);
            return true;
        }
        else {
            return solve(curr+1, n, sum, s);
        }
    }
}

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
    set <int> s;
    if (solve(1, n, sum / 2, s)) {
        cout << "YES\n";
        cout << s.size() << "\n";
        for (auto &i : s) cout << i << " ";
        cout << "\n";
        cout << n - s.size() << "\n";
        for (int i = 1; i <= n; i++) {
            if (!s.count(i)) cout << i << " ";
        }
    }
    else {
        cout << "NO\n";
    }
    return 0;
}

