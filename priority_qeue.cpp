#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
//default priotity queue is dessending order
//    priority_queue<int> pq;
priority_queue<int,vector<int>,greater<int>> pq;
   pq.push(5);
   pq.push(5);
   pq.push(2);
   pq.push(6);
   pq.push(9);
//    cout<<pq.top()<<endl;
//    pq.pop();
//    pq.pop();
//    cout<<pq.top()<<endl;
//    cout<<pq.size()<<endl;

   while(!pq.empty())
   {
    int value=pq.top();
    pq.pop();
    cout<<value<<endl;
   }
    return 0;
}