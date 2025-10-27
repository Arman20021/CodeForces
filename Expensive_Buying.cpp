#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define loop2(j, a, b) for (int j = (a); j < (b); j++)
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
        vi v(a);
        loop(i, 0, a)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        int sum = 0;
        loop(i, 0, b)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}