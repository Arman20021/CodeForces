#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), q(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    int l = 0, r = 0, ans = 0;
    while (r < m && l<n)
    {
        if (q[r] == v[l])
        {
            ans++;
            l++;
        }
        else
        {

            r++;
        }
    }
    cout << ans*2-1 << endl;

    return 0;
}