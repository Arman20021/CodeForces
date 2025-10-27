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
        string s;
        cin >> s;

        bool flag = true;
        int i = 0;

        while (i < n)
        {
            if (s[i] == '1')
            {
                int j = i;
                while (j < n && s[j] == '1')
                    j++;
                int length = j - i;
                if (length == 1 || length == 2)
                {
                    flag = false;
                    break;
                }
                i = j;
            }
            else
            {
                i++;
            }
        }

        if (!flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}
