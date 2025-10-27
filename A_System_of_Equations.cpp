#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<ll>;
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define loop2(j, a, b) for (int j = (a); j < (b); j++)
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   int count=0;
   loop(i,0,1000)
   {
    loop2(j,0,100)
    {
        if((i*i)+j==n && i+(j*j)==m)
        {
            count++;
        }
    }
   }
   cout<<count;
   
    return 0;
}