#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            cin >> a;
            if (a == 1)
            {
                cnt++;
            }
        }
        cout << n - (cnt / 2) << endl;
    }

    return 0;
}