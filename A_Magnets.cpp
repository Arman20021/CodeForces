#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int flag = 0;

    for (int i = 0; i < n; i++)
    {

        if (v[i] != v[i + 1])
        {
            flag++;
        }
    
        cout<<i<<" iteration"<<flag<<endl;
    }
    cout << flag << endl;

    return 0;
}