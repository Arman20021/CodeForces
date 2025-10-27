#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char> ch;
    for (auto value : s)
    {
        if (value != '+')
        {
            ch.push_back(value);
        }
    }

    sort(ch.begin(), ch.end());
    for (int i = 0; i < ch.size(); i++)
    {
        cout << ch[i];
        if (i != ch.size() - 1)
        {
            cout << '+';
        }
    }

    return 0;
}