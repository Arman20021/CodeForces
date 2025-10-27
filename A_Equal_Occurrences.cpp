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
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> count(n + 1, 0);
        for (int x : a)
            count[x]++;

        int c = 0;
        for (int i = 1; i <= n; ++i)
            c = max(c, count[i]);

        int ans = 0;
        for (int i = 1; i <= c; i++)
        {
            int m = 0;
            for (int j = 1; j <= n; j++)
                if (count[j] >= i)
                {
                    m++;
                }
            ans = max(ans, i * m);
        }
        cout << ans << endl;
    }
    return 0;
}
