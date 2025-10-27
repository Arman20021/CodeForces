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
        int x, y;
        cin >> x >> y;
        int count = (x + y) / 3;      
        int count1 = min(y, count);  
        cout << (count + count1) << endl;
    }

    return 0;
}