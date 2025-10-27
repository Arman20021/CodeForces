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
        int sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            int average = sum / (i + 1);
            if (average < 40)
            {
                flag = true;
            }
        }

        if (flag == false)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}