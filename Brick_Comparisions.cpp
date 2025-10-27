#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--)
   {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto it=max_element(v.begin(),v.end());
    cout<<it-v.begin()+1<<endl;
   }
   
    return 0;
}