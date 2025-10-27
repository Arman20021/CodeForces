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
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        int a = pow(t1, 2);
        int b = pow(r1, 3);
        int c = pow(t2, 2);
        int d = pow(r2, 3);

        float e = (float)a / c;
        float f = (float)b / d;

        e == f ? cout << "Yes" : cout << "No";
        cout << endl;
    }

    return 0;
}