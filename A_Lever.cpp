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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        int count = 0;
        while (true)
        {
            int num = -1;
            for (int i = 0; i < n; i++)
            {

                if (v[i] > v1[i])
                {
                    num = i;
                    break;
                }
            }
            count++;
            if (num == -1)
            {
                break;
            }
            v[num]--;

            for (int i = 0; i < n; i++)
            {

                if (v[i] < v1[i])
                {
                    v[i]++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}