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
        vector<int> alice;
        vector<int> bob;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            alice.push_back(x);
        }
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            bob.push_back(x);
        }

        auto a = max_element(alice.begin(), alice.end());
        auto b = max_element(bob.begin(), bob.end());

        int c = count(alice.begin(), alice.end(), *a);
        int d = count(bob.begin(), bob.end(), *b);
        if ((*a != *b) && c == d)
        {
            if (*a > *b)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }

        else if (c > d)
        {
            cout << "Alice" << endl;
        }
        else if (c < d)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}