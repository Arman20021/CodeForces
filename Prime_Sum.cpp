#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define loop2(j, a, b) for (int j = (a); j < (b); j++)

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
        vi v(n);
        loop(i, 0, n) cin >> v[i];

        ll c1 = 0, c2 = 0, c3 = 0;
        loop(i, 0, n)
        {
            if (v[i] == 1)
                ++c1;
            else if (v[i] == 2)
                ++c2;
            else if (v[i] == 3)
                ++c3;
        }

        ll ans = (c1 * (c1 - 1)) / 2 + (c1 * c2) + (c2 * c3);
        cout << ans << "\n";
    }
    return 0;
}
