#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
int n;cin>>n;
   string s;
   cin>>s;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
      if(s[i]==s[i+1])
      {
          cnt++;
      }

   }
   cout<<cnt<<endl;

   
    return 0;
}