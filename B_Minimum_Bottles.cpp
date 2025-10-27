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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout<<(sum+x-1)/x<<endl;
    }

    return 0;
}