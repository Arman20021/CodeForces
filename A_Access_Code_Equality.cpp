#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
  vector<string>s(7);
  for (int i = 0; i < 7; i++)
  {
   cin>>s[i];
  }
  

   auto it =find(s.begin(),s.end(),"WECNITK");
  
   if(it!=s.end())
   {
    cout<<"Welcome to Web Club!"<<endl;
   }
   else cout<<"Access denied"<<endl;
   
    return 0;
}