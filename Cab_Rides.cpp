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

        int full = n / 4;
        int rem = n % 4;

        int cost = 0;
        if (rem == 0)
        {
            cost = full * 400;
        }
        else if (rem == 1)
        {
            if (full >= 1)
            {
                cost = (full - 1) * 400 + 500;
            }
            else
            {
                cost = 200;
            }
        }
        else if (rem == 2)
        {
            cost = full * 400 + 200;
        }
        else
        {
            cost = full * 400 + 300;
        }

        cout << cost << endl;
    }

    return 0;
}