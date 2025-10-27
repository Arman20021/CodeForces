#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;

    int count = min(r, b);
    int green = count;
    int red = r - count;
    int blue = b - count;

    int skill = green * 5 + red * 1 + blue * 2;
    cout << skill << endl;

    return 0;
}
