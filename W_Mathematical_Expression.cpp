#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    char d, e;
    cin >> a >> d >> b >> e >> c;
    int add = a + b;
    int mul = a * b;
    int sub = a - b;
    if (d == '+')
    {
        (a + b) == c ? cout << "Yes" : cout << add;
    }
    else if (d == '-')
    {
        (a - b) == c ? cout << "Yes" : cout << sub;
    }
    else if (d == '*')
    {
        (a * b) == c ? cout << "Yes" : cout << mul;
    }

    return 0;
}