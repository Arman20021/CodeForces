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
       int n;
       cin>>n;
       vector<int>v;
       int count1=0,count2=0;
       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        if(x==1) count1++;
        else count2++;
       }

       int ans=0;
       ans=count2;
       if(count1%2==0)
       {
        ans=min(ans,count1/2);
       }

       cout<<ans<<endl;
    }
    
    
     return 0;
 }