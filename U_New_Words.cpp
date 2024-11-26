#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    cin >> a;
    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;
    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'E' || a[i] == 'e')
        {
            e++;
        }
        if (a[i] == 'G' || a[i] == 'g')
        {
            g++;
        }
        if (a[i] == 'y' || a[i] == 'Y')
        {
            y++;
        }
        if (a[i] == 'P' || a[i] == 'p')
        {
            p++;
        }
        if (a[i] == 'T' || a[i] == 't')
        {
            t++;
        }
    }
    int m = min({e, g, y, p, t});
     cout<<m;
    return 0;
}