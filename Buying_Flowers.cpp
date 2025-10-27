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

        int ans = INT_MAX;
        for (int i = 0; i <= n / 3; i++)
        {
            int rem = n - 3 * i;
            if (rem % 2 == 0)
            {
                int cost = 5 * i + 4 * (rem / 2);
                ans = min(ans, cost);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
