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
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
             cin>>arr[i];
        }
        
        int b = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                b = min(b, arr[i] + arr[j] + j - i);
            }
        }
        cout << b << endl;
    }

    return 0;
}

// Ai + Aj + j - i