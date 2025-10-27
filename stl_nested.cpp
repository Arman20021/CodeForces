#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
   //vector nest in map
   map<vector<int>,int>mp;
   vector<int>v;
   v.push_back(3);
   v.push_back(4);
   v.push_back(6);
   v.push_back(7);
   v.push_back(9);
   mp[v]=5;
   for(auto [x,y]:mp)
   {
    vector<int>a=x;
    for(auto value:a)
    {
        cout<<value<<endl;
    }
   }

   
    return 0;
}