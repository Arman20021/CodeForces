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
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        auto it=min_element(v.begin(),v.end());
        int count=0;
        int chef_scr=v[0];
        for(int num:v)
        {
            if(num>=chef_scr)
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }

    return 0;
}