#include <bits/stdc++.h>
using namespace std;
int main()
{

    int friends, height;
    cin >> friends >> height;
    int width = 0;
    while (friends--)
    {
        int x;
        cin >> x;
        if (x > height)
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }
    cout << width;

    return 0;
}