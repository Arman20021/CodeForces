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
        vector<int> q(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 1;
        int num = v[0] % 2;
        for (int i = 1; i < n; i++)
        {
            if ((v[i] % 2) != num)
            {
                count++;
                num = v[i] % 2;
            }
        }

        cout << count << endl;
    }

    return 0;
}
