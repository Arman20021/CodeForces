#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        int m = n * (n - 1) / 2;
        vector<ll> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<int> sub(m + 1, 0);
        sub[0] = 0;
        for (int i = 1; i <= m; i++)
        {

            double t = sqrt(1.0 + 8.0 * i);
            int s = (int)ceil((1.0 + t) / 2.0);
            sub[i] = min(n - 1, s - 1);
        }

        int need = n - 1;
        ll ans = 0;
        for (int i = m; i >= 1 && need > 0; i--)
        {
            if (sub[i - 1] < need)
            {

                ans += v[i - 1];
                --need;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
