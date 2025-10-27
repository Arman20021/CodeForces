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
        sort(v.begin(), v.end());

        int c = n;
        int sum = 0;
        int flag = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] > c)
            {
                flag = 1;
            }
            else
            {
                sum += c - v[i];
            }
            c = c - 1;
        }

        if (flag == 1)
            cout << "-1";
        else
            cout << sum;
        cout << endl;
    }

    return 0;
}