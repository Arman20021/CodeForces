#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arrival(n), departure(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arrival[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> departure[i];
        }
        int ans = 0;

        for (int i = 0; i <= 1439; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arrival[j] == i || departure[j] == i)
                {
                    count++;
                }
            }
            ans = max(ans, count);
        }

        cout << ans << endl;
    }
    return 0;
}
