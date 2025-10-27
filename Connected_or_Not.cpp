#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int adj_matrix[n][n];

    memset(adj_matrix, 0, sizeof(adj_matrix));

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        if (u == v)
        {
            cout << "YES\n";
        }
        else
        {
            cout << (adj_matrix[u][v] ? "YES\n" : "NO\n");
        }
    }

    return 0;
}