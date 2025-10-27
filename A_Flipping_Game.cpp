#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

   
    if (n == 1)
    {
        cout << (x[0] == 1 ? 0 : 1) << endl;
        return 0;
    }

    auto fast_pos = find(x.begin(), x.end(), 0);
    auto last_pos = find(x.rbegin(), x.rend(), 0);

    int first_index = -1, last_index = -1;

    if (fast_pos != x.end())
    {
        first_index = fast_pos - x.begin();
        last_index = last_pos.base() - x.begin() - 1;

        for (int i = first_index; i <= last_index; i++)
        {
            x[i] = 1 - x[i]; 
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 1)
        {
            count++;
        }
    }

    cout << count << endl;
}
