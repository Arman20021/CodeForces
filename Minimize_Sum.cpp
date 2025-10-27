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

        vector<int> V(a);
        ll count = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> V[i];
            count += V[i];
        }

        vector<int> count2(b + 1, 0);
        for (int v : V)
            count2[v]++;

        vector<int> count3(b + 2, 0);
        for (int t = b; t >= 0; t--)
        {
            count3[t] = count3[t + 1] + count2[t];
        }

        ll count4 = LLONG_MAX;
        for (int t = 1; t <= b; t++)
        {
            int r = count3[t];
            ll remain = b - t;
            ll output = (ll)a * remain - (ll)b * r;
            if (output < count4)
                count4 = output;
        }

        ll answer = count + count4;
        cout << answer << endl;
    }

    return 0;
}
