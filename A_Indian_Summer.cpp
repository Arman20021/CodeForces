#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }

//   for(auto value:mp)
//   {
//     cout<<value.first.first<<"->"<<value.first.second<<endl;
//   }

    cout << mp.size() << endl;

    return 0;
}