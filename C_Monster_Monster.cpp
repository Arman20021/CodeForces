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
        ll x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll total = v[i] + x * i;
            sum = max(sum, total);
        }

        cout << sum << endl;
    }

    return 0;
}
