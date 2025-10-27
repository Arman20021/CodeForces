#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define loop2(j, a, b) for (int j = (a); j < (b); j++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int available = 0, untreated = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            if (available > 0)
            {
                available--;
            }
            else
            {
                untreated++;
            }
        }
        else
        {
            available += x;
        }
    }
    cout << untreated << endl;

    return 0;
}