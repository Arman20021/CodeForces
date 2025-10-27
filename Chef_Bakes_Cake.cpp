#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y, cap, num;
    cin >> n >> x >> y;
    cap = y / x;
    num = (n + cap - 1) / cap;

    cout << num << endl;

    return 0;
}