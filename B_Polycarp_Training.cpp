#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.insert(a);
    }
    int ans = 0, problem = 1;
    while (!v.empty())
    {
        auto it = v.lower_bound(problem);
        if (it != v.end())
        {
            ans++;
            v.erase(it);
            problem++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}