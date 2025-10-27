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
        int n, m;
        cin >> n >> m;
        string ans;
        if (n == 0)
        {
            ans = ">";
            for (int i = 1; i < m; i++)
            {
                ans += '=';
                ans += '>';
            }
        }
        else if (m == 0)
        {
            ans = string(n, '<');
        }
        else
        {
            ans = string(n + 2, '<');
            for (int i = 0; i < m - 1; i++)
            {
                ans += '>';
                ans += '<';
            }
            ans += '>';
        }
        cout << ans << endl;
    }

    return 0;
}