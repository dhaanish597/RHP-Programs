#include <bits/stdc++.h>
using namespace std;

int r, c;

vector<vector<int>> lst;
vector<vector<int>> visited;

int tot = 0;

void dfs(int row, int col, bool flag) {

    if (row >= r || col >= c || row < 0 || col < 0 ||
        lst[row][col] == 0 || visited[row][col]) {
        return;
    }

    if (flag) {
        tot++;
    }

    visited[row][col] = 1;

    dfs(row + 1, col, false);
    dfs(row - 1, col, false);
    dfs(row, col + 1, false);
    dfs(row, col - 1, false);

    return;
}

int main() {

    cin >> r >> c;

    lst.resize(r);

    for (int i = 0; i < r; i++) {

        string s;
        cin >> s;

        vector<int> temp;

        for (int j = 0; j < c; j++) {

            if (s[j] == '#') {
                temp.push_back(0);
            }

            if (s[j] == '.') {
                temp.push_back(1);
            }
        }

        lst[i] = temp;
    }

    visited = vector<vector<int>>(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            dfs(i, j, true);
        }
    }

    cout << tot << '\n';

    return 0;
}