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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int max_profit = 0;

        for (int x = 0; x <= 100; x++)
        {
            int sold = 0;

            for (int i = 0; i < n; i++)
            {
                sold += min(a[i], x);
            }

            int cost = x * n * 30;
            int revenue = sold * 50;
            int profit = revenue - cost;

            max_profit = max(max_profit, profit);
        }

        cout << max_profit << endl;
    }

    return 0;
}
