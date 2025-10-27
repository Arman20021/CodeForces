#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<string> dq;
    unordered_set<string> seen;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (seen.count(x))
        {

            dq.erase(find(dq.begin(), dq.end(), x));
        }
        else
        {
            seen.insert(x);
        }

        dq.push_front(x);
    }

    for (const string &s : dq)
    {
        cout << s << '\n';
    }

    return 0;
}
