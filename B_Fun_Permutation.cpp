#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        
        vector<int> q(n);
        for (int i = 0; i < n; i++) {
            q[i] = (i + 1) % n + 1;  
        }

        for (int i = 0; i < n; i++) {
            cout << q[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
