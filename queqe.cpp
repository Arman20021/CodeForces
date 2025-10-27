#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    // when we use the size of the deque to take input
    /* deque<int>dq(n);
    for(int i=0;i<n;i++)
    {
    cin>>dq[i];
    }
    */

    dq.push_front(11);
    dq.push_front(111);
    dq.pop_front();
    for (auto value : dq)
    {
        cout << value << " ";
    }
    cout<<endl;
    cout<<dq.back()<<endl;

    return 0;
}