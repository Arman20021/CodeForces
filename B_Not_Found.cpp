#include <bits/stdc++.h>
using namespace std;
int main()
{
 
   string a;
   cin>>a;
   for(char c='a'; c<='z';c++)
   {
     if(a.find(c)==-1)
     {
        cout<<c<<endl;
        return 0;
     }

   }
   cout<<"None"<<endl;

   
   
    return 0;
}