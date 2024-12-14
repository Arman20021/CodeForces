#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        if (n == 1)
        {
            flag = 0;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
        flag == 1 ? cout << "NO" : cout << "YES";
        cout << endl;
    }

    return 0;
}