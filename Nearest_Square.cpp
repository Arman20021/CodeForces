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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (i * i <= n)
            {
                v.push_back(i * i);
            }
        }
        auto it = max_element(v.begin(), v.end());
        cout << *it << endl;
    }

    return 0;
}