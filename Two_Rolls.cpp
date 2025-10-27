#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        bool canWin = false;
        for (int d1 = y; d1 <= y + 5; d1++)
        {
            for (int d2 = y; d2 <= y + 5; d2++)
            {
                if (x + d1 + d2 == 50)
                {
                    canWin = true;
                    break;
                }
            }
            if (canWin)
                break;
        }

        if(canWin==true) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
