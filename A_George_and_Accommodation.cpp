#include <bits/stdc++.h>
using namespace std;
int main()
{
 
   int n;
   cin>>n;
   int flag=0;
   while (n--)
   {
     int p,q;
     cin>>p>>q;
     if(q-p>=2)
     {
        flag++;
     }
   }
  flag>=2?cout<<flag:cout<<"0";
   
   
    return 0;
}