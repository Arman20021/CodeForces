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
        int n, k;
        cin >> n >> k;

        k = k * (k + 1) / 2;
        if (n >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}