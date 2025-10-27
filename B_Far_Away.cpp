#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {

        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            count += max(v[i] - 1, m - v[i]);
        }
        cout << count << endl;
    }

    return 0;
}
