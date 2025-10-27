#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), c(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        c[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << c[x - 1] << endl;
    }

    return 0;
}