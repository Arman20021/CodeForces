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
        string s;
        cin >> s;

        string s1 = "ADVITIYA";
        int count = 0, a;
        for (int i = 0; i < 8; i++)
        {
            a = (s1[i] - s[i] + 26) % 26;
            count += a;
        }
        cout << count << endl;
    }

    return 0;
}