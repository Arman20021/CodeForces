#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int N; 
        cin >> N;
        bool has1_parity[2] = {false, false}; // [0]=even index, [1]=odd index (1-based)
        for (int i = 1; i <= N; ++i) {
            int a; cin >> a;
            if (a == 1) {
                has1_parity[i & 1] = true; // i&1 -> 1 for odd index, 0 for even index
            }
        }
        // If both odd and even index sets contain at least one '1' -> strongly connected -> No
        // Else there exists (i,j) unreachable -> Yes
        cout << ((has1_parity[0] && has1_parity[1]) ? "No" : "Yes") << '\n';
    }
    return 0;
}
