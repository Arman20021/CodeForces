 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tuple<string,int ,string> t={"arman",1,"dhaka"};
    cout<<get<0>(t)<<" "<<get<1>(t)<<endl;
    

     return 0;
 }