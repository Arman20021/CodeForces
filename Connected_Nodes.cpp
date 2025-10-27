#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_list(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        if (adj_list[n].empty())
        {
            cout << "-1" << endl;
            ;
        }
        else
        {
            sort(adj_list[n].begin(), adj_list[n].end(), greater<int>()); 
            for (int x : adj_list[n])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
