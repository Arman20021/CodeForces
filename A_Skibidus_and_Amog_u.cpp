#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int index = s.rfind("us");
      

        s.replace(index, 2, "i"); 

        cout << s << endl;
    }

    return 0;
}
