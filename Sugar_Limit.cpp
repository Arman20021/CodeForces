#include <bits/stdc++.h>
using namespace std;

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
        vector<int> A(n), B(n);

        for (int i = 0; i < n; ++i)
            cin >> A[i];
        for (int i = 0; i < n; ++i)
            cin >> B[i];

        int maximum = INT_MIN;

        for (int L = 0; L <= 100; ++L)
        {
            int S = 0;
            for (int i = 0; i < n; ++i)
            {
                if (B[i] <= L && A[i] > 0)
                {
                    S += A[i];
                }
            }
            if (S - L > maximum)
            {
                maximum = S - L;
            }
        }

        cout << maximum << endl;
    }

    return 0;
}
