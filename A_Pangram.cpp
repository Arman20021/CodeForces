#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> letters;
    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            letters.insert(ch);
        }
    }

    letters.size() == 26 ? cout << "YES" : cout << "NO" << endl;

    return 0;
}
