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
        string s;
        cin >> s;

        int cntA = 0, cntB = 0, cntC = 0, cntD = 0;

        for (char c : s)
        {
            if (c == 'A')
                cntA++;
            else if (c == 'B')
                cntB++;
            else if (c == 'C')
                cntC++;
            else if (c == 'D')
                cntD++;
        }

        int ans = min(cntA, n) + min(cntB, n) + min(cntC, n) + min(cntD, n);
        cout << ans << "\n";
    }

    return 0;
}