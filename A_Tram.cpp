 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
  
    int n;
    cin>>n;
    int capacity=0;
    int passenger=0;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        passenger-=a;
        passenger+=b;
        capacity=max(capacity,passenger);

        
    }
    cout<<capacity<<endl;
    
    
     return 0;
 }