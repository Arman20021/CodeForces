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
    int a,b;
    cin>>a>>b;
    int time=a*b;
    int time1=(time%60);
   
    cout<<time/60<<" "<<time1 <<endl;
   }
   
    return 0;
}