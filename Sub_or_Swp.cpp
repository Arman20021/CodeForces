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
        int x, y;
        cin >> x >> y;
        while (y != 0)
        {
            int temp = y;
            y = x % y;
            x = temp;
        }
        cout << x << endl;
    }

    return 0;
}