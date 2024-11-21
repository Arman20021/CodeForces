#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = n - 1; i < n, j > 0; i++, j--)
    {
       long long  int a = arr[i];
      long long   int b = arr[j];
        a == b ? cout << "YES" : cout << "NO";
         
        break;
    }

    return 0;
}