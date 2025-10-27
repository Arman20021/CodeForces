#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    vector<int> c(a);
    vector<int> d;
    vector<int> e;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < a; i++)
    {
        if (c[i] == b)
        {
            d.push_back(c[i]);
        }
        else
        {
            e.push_back(c[i]);
        }
    }

    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }

    return 0;
}