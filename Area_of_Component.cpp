#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.' && !visited[i][j];
}

int dfs(int si, int sj)
{
    int area = 1;
    visited[si][sj] = true;

    for (auto x : directions)
    {
        int ni = si + x.first;
        int nj = sj + x.second;

        if (valid(ni, nj))
        {
            area += dfs(ni, nj);
        }
    }

    return area;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    int min_area = INT_MAX;
    bool found_component = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                found_component = true;
                int area = dfs(i, j);
                min_area = min(min_area, area);
            }
        }
    }

    if (found_component)
    {
        cout << min_area << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}