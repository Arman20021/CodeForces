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
    int time,a,b;
    cin>>time>>a>>b;
    cout<<((2*(180+time))-(a+b))<<endl;

   }
   
    return 0;
}