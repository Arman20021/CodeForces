#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string a;
        cin >> a;
        int num_size = a.size();
        int flag = 0;
       

        for (int i = 0; i < num_size -3; i++)
        {
            int sum1 = (a[i] - '0') + (a[i + 1] - '0') + (a[i + 2] - '0');
            int sum2 = (a[num_size - 1+i] - '0') + (a[num_size - 2+i] - '0') + (a[num_size - 3+i] - '0');

            if (sum1 == sum2)
            {
                flag = 1;
                break;
            }
        }

      flag==1?cout<<"YES":cout<<"NO";
      cout<<endl;
    }
    return 0;
}