/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

int reserved[8][8];
int ct = 0;

bool solve(int row, vector<int> &v) {
    if (v.size() == 8) {
        ct++;
        return true;
    }
    else {
        bool valid = false;
        for (int i = 0; i < 8; i++) {
            // if adding queen to ith column in row is valid
            bool legal = true;
            if (reserved[row][i]) legal = false;
            for (int rowcheck = 0; rowcheck < row; rowcheck++) {
                if ((v[rowcheck] == i) || (v[rowcheck] + (row - rowcheck) == i)
                    || (v[rowcheck] - (row - rowcheck) == i)) legal = false;
            }
            if (legal) {
                v.push_back(i);
            }
            else continue;
            valid = solve(row+1, v);
            v.pop_back();
        }
        return valid;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    // reserved locations array
    for (int i = 0; i < 8; i++) {
        // get row
        string row; cin >> row;
        for (int j = 0; j < 8; j++) {
            if (row[j] == '.') reserved[i][j] = 0;
            else reserved[i][j] = 1;
        }
    }
    vector<int> v;
    solve(0, v);
    cout << ct << "\n";
    return 0;
}

