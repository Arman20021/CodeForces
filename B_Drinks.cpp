#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double volume = sum/n;
    cout << fixed << setprecision(12) <<  volume;

    return 0;
}