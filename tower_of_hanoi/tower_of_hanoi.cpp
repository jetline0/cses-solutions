/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int src, int dest, int tmp, vector<pair<int,int>> &moves) {
    if (n == 1) {
        moves.push_back({src, dest});
        return;
    }
    else {
        hanoi(n-1, src, tmp, dest, moves);
        hanoi(1, src, dest, tmp, moves);
        hanoi(n-1, tmp, dest, src, moves);
        return;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int n; cin >> n;
    vector<pair<int,int>> moves;
    hanoi(n, 1, 3, 2, moves);
    cout << moves.size() << "\n";
    for (auto &p : moves) {
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}

