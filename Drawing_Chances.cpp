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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        if (a % 2 == 1)
        {
            cout << "No" << endl;
            continue;
        }

        int count = 0;
        for (char c : s)
        {
            if (c == '1')
            {

                count++;
            }
        }

        int remain = a - b;
        int alice = a / 2 - count;

        if (alice >= 0 && alice <= remain)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}