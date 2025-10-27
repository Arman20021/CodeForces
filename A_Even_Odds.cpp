#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll serial, target;
    cin >> serial >> target;

    ll odd_count = (serial + 1) / 2;

    if (target <= odd_count)
    {
        cout << 2 * target - 1 << "\n";
    }
    else
    {
        cout << 2 * (target - odd_count) << "\n";
    }

    return 0;
}
