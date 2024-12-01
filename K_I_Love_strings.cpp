#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        int z = max(a.size(), b.size());

        for (int i = 0; i < z; i++)
        {

            if (i < a.size())
                cout << a[i];
                
            if (i < b.size())
                cout << b[i];
        }

        cout << endl;
    }

    return 0;
}