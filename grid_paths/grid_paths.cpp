/* WRITTEN BY: gelatin :D */
#include <bits/stdc++.h>
using namespace std;

string path;
int visited[9][9];
int dirrow[4] = {-1, 0, 1, 0};
int dircol[4] = { 0, 1, 0, -1};
int p[48];
int paths = 0;


bool solve(int row, int col, int moveno) {
    if (visited[row-1][col] && visited[row+1][col] 
            && (!visited[row][col-1] && !visited[row][col+1])) return false;
    if (visited[row][col-1] && visited[row][col+1] 
            && (!visited[row-1][col] && !visited[row+1][col])) return false;
    
    if (row == 7 && col == 1) {
        if (moveno == 48) {
            paths++;
            return true;
        }
        else return false;
    }
    else if (moveno == 48) {
        return false;
    }
    else {
        if (p[moveno] == 4) {
            // try all 4 directions
            bool legal = false;
            visited[row][col] = 1;
            for (int i = 0; i < 4; i++) {
                int newrow = row + dirrow[i];
                int newcol = col + dircol[i];
                if (visited[newrow][newcol]) continue;
                legal = solve(newrow, newcol, moveno+1);
            }
            visited[row][col] = 0;
            if (!legal) return false;
        } 
        else {
            // check if direction works
            bool legal = false;
            int newrow = row + dirrow[p[moveno]];
            int newcol = col + dircol[p[moveno]];
            visited[row][col] = 1;
            if (!visited[newrow][newcol]) legal = solve(newrow, newcol, moveno+1);
            visited[row][col] = 0;
            if (!legal) return false;
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            visited[i][j] = 0;
        }
    }
    for (int i = 0; i < 9; i++) {
        visited[0][i] = 1;
        visited[i][0] = 1;
        visited[8][i] = 1;
        visited[i][8] = 1;
    }
//  for (int i = 0; i < 9; i++) {
//      for (int j = 0; j < 9; j++) {
//          cout << visited[i][j] << " ";
//      }
//      cout << "\n";
//  }
    cin >> path;
    for (int i = 0; i < 48; i++) {
        if (path[i] == 'U') p[i] = 0;
        else if (path[i] == 'R') p[i] = 1;
        else if (path[i] == 'D') p[i] = 2;
        else if (path[i] == 'L') p[i] = 3;
        else p[i] = 4;
    }
    solve(1, 1, 0);
    cout << paths << "\n";
    return 0;
}

