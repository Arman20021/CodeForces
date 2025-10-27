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
    int Count = 1;
    visited[si][sj] = true;

    for (auto x : directions)
    {
        int ni = si + x.first;
        int nj = sj + x.second;

        if (valid(ni, nj))
        {
            Count += dfs(ni, nj);
        }
    }

    return Count;
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

    vector<int> sizes;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                int size = dfs(i, j);
                sizes.push_back(size);
            }
        }
    }

    if (sizes.empty())
    {
        cout << endl;
    }
    else
    {
        sort(sizes.begin(), sizes.end());
        for (int x : sizes)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
