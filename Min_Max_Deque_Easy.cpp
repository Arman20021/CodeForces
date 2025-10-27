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
        int n, q;
        cin >> n >> q;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll number = v[1];
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                number = max(number, v[i]);
            }
            else
            {
                number = min(number, v[i]);
            }
        }
        cout << number << endl;
    }

    return 0;
}
