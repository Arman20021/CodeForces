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
    int n;
    cin >> n;
    vi v(n);
    loop(i, 0, n)
    {
        cin >> v[i];
    }
    int ans = 0, start = 0, end = 0;
    loop(i, 0, n)
    {
        int sum = 0;
        loop2(j, i, n)
        {
            sum += v[j];
            if (sum > ans)
            {
                ans = sum;
                start = i;
                end = j;
            }
        }
    }
    cout << ans << "\n";
    cout << start << "\n";
    cout << end << "\n";

    return 0;
}