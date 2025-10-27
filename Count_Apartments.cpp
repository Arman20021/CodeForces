#include <bits/stdc++.h>
using namespace std;

char grid[1005][105];
bool visited[105][105];
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.' && !visited[i][j];
}

int dfs(int si, int sj)
{
    int roomCount = 1;
    visited[si][sj] = true;

    for (auto dir : directions)
    {
        int ni = si + dir.first;
        int nj = sj + dir.second;

        if (valid(ni, nj))
        {
            roomCount += dfs(ni, nj);
        }
    }

    return roomCount;
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

    vector<int> apartmentSizes;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                int size = dfs(i, j); // Get the size of this apartment
                apartmentSizes.push_back(size);
            }
        }
    }

    if (apartmentSizes.empty())
    {
        cout << endl; // No apartments
    }
    else
    {
        sort(apartmentSizes.begin(), apartmentSizes.end());
        for (int size : apartmentSizes)
        {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}
