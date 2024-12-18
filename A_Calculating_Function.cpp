#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long double sum = 0;

    for (int i = 1; i <= n;)
    {

        long double result = pow(-1, i) * i;

        sum += result;
        i = abs(result) + 1;
    }
    cout << sum << endl;

    return 0;
}
