#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
   int t;
   cin>>t;
   while (t--)
   {
     int x,y;
     cin>>x>>y;
     for(int i=1;i<5;i++)
     {
        if(x%y==0 || y%x==0)
        {
            cout<<"0"<<endl;
        }
        else if(x%y!=0 || y%x!=0)
        {
            

        }
     }
   }
   
   
    return 0;
}