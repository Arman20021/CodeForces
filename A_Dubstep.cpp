#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
 string s;cin>>s;
 auto it=s.find("WUB");
s.erase(*it);
cout<<s<<endl;
   
    return 0;
}