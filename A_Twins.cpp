#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> n(t);
    int sum = 0, sum2 = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        sum += n[i];
    }
    sum = sum / 2;

    sort(n.begin(), n.end());

    int count = 0;
    for (int i = t - 1; i >= 0; i--)
    {
        sum2 += n[i];
        count++;
        if (sum < sum2)
            break;
    }

    cout << count << endl;
    return 0;
}
