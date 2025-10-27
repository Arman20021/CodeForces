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
        int a, b;
        cin >> a >> b;

        if (b - a == 0 || a - b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (b > a)
            {
                int c = b - a;
                if (c % 10 == 0)
                {
                    cout << c / 10 << endl;
                }
                else
                    cout << (c / 10) + 1 << endl;
            }
            else
            {
                int d = a - b;
                if (d % 10 == 0)
                {
                    cout << (d / 10)  << endl;
                }
                else
                {
                     cout << (d / 10) + 1 << endl;
                }
            }
        }
    }

    return 0;
}