#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
ios::sync_with_stdio(false); 
cin.tie(nullptr);
  int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> s(k);
        int m = -1;
        for (int i = 0; i < k; i++){
            cin >> s[i];
            m = max(m, s[i]);
        }
        cout << 2 * (n - m) - k + 1 << '\n';
    }
   
    return 0;
}