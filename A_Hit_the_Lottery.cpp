#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v = {100, 20, 10, 5, 1};
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        cnt += n / v[i];
        n = n % v[i];
    }

    cout << cnt << endl;

    return 0;
}