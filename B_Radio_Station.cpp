#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int orginal, fake;
    cin >> orginal >> fake;
    map<string, string> x, y;
    for (int i = 0; i < orginal; i++)
    {
        string a, b;
        cin >> a >> b;
        //  b.pop_back();

        x[a] = b; // x[main]=192.168.0.2
        y[b] = a; // x[main]=192.168.0.2
    }
    for (int i = 0; i < fake; i++)
    {
        string a, b;
        cin >> a >> b;
        b.pop_back();

        if (y.find(b) != y.end())
        {
            cout << a << " " << b << ";" << " " << "#" << y[b] << endl;
        }
    }

    return 0;
}