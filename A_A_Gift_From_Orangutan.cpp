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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto max_vec = max_element(v.begin(), v.end());

        auto min_vec = min_element(v.begin(), v.end());
        cout << (*max_vec - *min_vec) * (n - 1) << endl;
    }

    return 0;
}