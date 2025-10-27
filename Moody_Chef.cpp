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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0, max_num = 0, min_num = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= l && v[i] <= r)
            {
                count++;
            }
            else
            {
                count--;
            }
            max_num = max(max_num, count);
            min_num = min(min_num, count);
        }

        cout << max_num << " " << min_num << endl;
    }

    return 0;
}