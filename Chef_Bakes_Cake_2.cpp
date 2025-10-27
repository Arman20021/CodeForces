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
        int n;
        cin >> n;

        vector<int> need(n);
        vector<int> have(n);

        for (int i = 0; i < n; i++)
        {
            cin >> need[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> have[i];
        }

        int cost = 0;

        for (int i = 0; i < n; i++)
        {
            if (need[i] > have[i])
            {
                cost += (need[i] - have[i]);
            }
        }

        cout << cost << endl;
    }

    return 0;
}
