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
        int x;
        cin >> x;
        int min = 9;
        while (x > 0)
        {
            int digit = x % 10;
            if (digit < min)
            {
                min = digit;
            }
            x = x / 10;
        }
        cout << min << endl;
    }

    return 0;
}