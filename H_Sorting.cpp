#include <bits/stdc++.h>
using namespace std;
int main()
{
int count;
cin>>count;
int arr[count];
for (int i = 0; i < count; i++)
{
    cin>>arr[i];
}
sort(arr,arr+count+1);
for (int i = 0; i < count; i++)
{
  
    cout<<arr[i]<<" ";
}


   
   
    return 0;
}