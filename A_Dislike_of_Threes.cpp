#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    for (int i = 1; v.size() <= 1000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            v.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << v[x-1] << endl;
    }

    return 0;
}