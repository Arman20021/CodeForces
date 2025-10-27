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
        int n;cin>>n;
        string a;cin>>a;
        int count=0;
        for (int i=0;i<a.size();i++)
        {
            if(a[i]!=a[i+1])  count++;
        }
        cout<<count/2<<endl;

    }

    return 0;
}