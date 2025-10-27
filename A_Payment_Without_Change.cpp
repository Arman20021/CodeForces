#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, n, S;
        cin >> a >> b >> n >> S;

        ll take = min(a, S / n);

        ll remaining = S - take * n;

        if (remaining <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
