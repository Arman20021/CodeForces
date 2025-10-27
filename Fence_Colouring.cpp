#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> freqency(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            freqency[v[i]]++;
        }

        int a = freqency[1];
        int max_freqency = *max_element(freqency.begin(), freqency.end());

        int ans = min(n - a, n - max_freqency + 1);
        cout << ans << endl;
    }

    return 0;
}
