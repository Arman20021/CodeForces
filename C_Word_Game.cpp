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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string a;
                cin >> a;
                mp[a].push_back(i);
            }
        }
        vector<int> ans(4);

        for (auto [x, y] : mp)
        {
            vector<int> a = y;
            if (a.size() == 1)
            {
                ans[a[0]] += 3;
            }
            else if (a.size() == 2)
            {
                ans[a[0]]++;
                ans[a[1]]++;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}