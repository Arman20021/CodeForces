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
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int d = (5 * a1 + b1) - (5 * a2 + b2);
        
        if (d >= 0 && d % 6 == 0)

            cout << "Yes" << endl;

        else

            cout << "No" << endl;
    }

    return 0;
}