#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#';
}

bool dfs(int si, int sj, int ei, int ej)
{
    if (si == ei && sj == ej)
        return true;
    visited[si][sj] = true;

    for (auto x : directions)
    {
        int ni = si + x.first;
        int nj = sj + x.second;

        if (valid(ni, nj) && !visited[ni][nj] && (grid[ni][nj] == '.' || grid[ni][nj] == 'B'))
        {
            if (dfs(ni, nj, ei, ej))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;
    pair<int, int> roomA, roomB;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                roomA = {i, j};
            if (grid[i][j] == 'B')
                roomB = {i, j};
        }
    }

    memset(visited, false, sizeof(visited));

    if (dfs(roomA.first, roomA.second, roomB.first, roomB.second))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
