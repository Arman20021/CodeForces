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
        int n, c;
        cin >> n >> c;
        vector<int> cokies(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cokies[i];
        }

        for (int i = 0; i <= 200; i++)
        {
            int newcokkie = c + i;
            int count1 = 0, count2 = 0;
            for (int j = 0; j < n; j++)
            {
                if (cokies[j] < newcokkie)
                    count1++;
                if (cokies[j] == newcokkie)
                    count2++;
            }

            if (count1 > 0 && count2 == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
