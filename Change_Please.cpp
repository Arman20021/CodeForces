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
        int money;
        cin >> money;
        int exchange = 100 - money;
        int change = exchange / 10;

        cout << change * 10 << endl;
    }

    return 0;
}