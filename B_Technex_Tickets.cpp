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
        int n;
        cin >> n;
        int count = 0;
        while (n > 3)
        {
            n -= 2;
            count++;
        }
        if (n == 1 || n == 3)
        {
            count += 1;
        }
        else if (n == 2)
        {
            count += 2;
        }
        cout << count << endl;
    }

    return 0;
}