#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
   int t;cin>>t;
   while(t--)
   {
    int a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    vector<int>v1;
    int a=a1+a2;
    v1.push_back(a);
    int b=b1+b2;
    v1.push_back(b);
    int c=c1+c2;
    v1.push_back(c);
    // int max_num=INT_MIN;
    // cout<<max(max_num,v1);
    auto it=max_element(v1.begin(),v1.end());
    cout<<*it<<endl;

    
   }
   
    return 0;
}