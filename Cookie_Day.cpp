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
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>=k)
        {
           v.push_back(x%k);
        }
        
    }
     if(v.size()==0)
     {
        cout<<"-1"<<endl;
     }
     else 
     {
        cout<<*min_element(v.begin(),v.end())<<endl;
     }



   }
   
    return 0;
}