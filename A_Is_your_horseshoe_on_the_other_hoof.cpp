#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {

            if (arr[i] == arr[j])
            {

                flag++;
                break;
            }
        }
    }
    cout << flag << endl;

    return 0;
}