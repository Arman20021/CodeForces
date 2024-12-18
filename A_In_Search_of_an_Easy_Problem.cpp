#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int flag = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            flag++;
        }
    }
    flag>=1?cout<<"HARD":cout<<"EASY";

    return 0;
}