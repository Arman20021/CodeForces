#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<bool> collected(m + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= 1 && v[i] <= m)
                collected[v[i]] = true;
        }

        int count = 0;
        for (int i = 1; i <= m; i++)
        {
            if (!collected[i] )
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
