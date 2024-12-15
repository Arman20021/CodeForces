#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, no_val;
    cin >> n >> no_val;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
     

    for (int i = 0; i < no_val; i++)
    {
        int val;
        cin >> val;
        int l = 0;
        int flag = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        flag == 1 ? cout << "found" : cout << "not found";
        cout << endl;
    }

    return 0;
}