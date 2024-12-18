#include <bits/stdc++.h>
using namespace std;
int main()
{

    string st1, st2, st3;
    cin >> st1 >> st2;

    reverse(st1.begin(), st1.end());
    st3 = st1;

    st2 == st3 ? cout << "YES" : cout << "NO";

    return 0;
}