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

        string result;

        if (n == 1)
        {
            result = "a";
        }
        else if (n == 2)
        {
            result = "aa";
        }
        else if (n == 3)
        {
            result = "aab";
        }
        else if (n == 4)
        {
            result = "abaa";
        }
        else
        {
            string original = "abc";
            for (int i = 0; i < n; i++)
            {
                result += original[i % 3];
            }
        }

        cout << result << endl;
    }

    return 0;
}