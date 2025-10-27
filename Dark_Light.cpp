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
        int n, k;
        cin >> n >> k;

        if (n % 4 == 0)
        {
            cout << (k == 0 ? "Off" : "On");
        }
        else
        {
            cout << (k == 0 ? "On" : "Ambiguous");
        }
        cout << endl;
    }

    return 0;
}