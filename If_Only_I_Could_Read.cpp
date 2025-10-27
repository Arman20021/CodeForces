#include <bits/stdc++.h>
using namespace std;

void cp_solution() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return;
    while (T--) {
        int N; cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        
        int L = -1, R = -1;
        for (int i = 0; i + 1 < N; ++i) {
            if (A[i] > A[i+1]) {
                L = i + 1; // 1-based
                R = i + 2;
                break;
            }
        }
        if (L == -1) cout << -1 << '\n';
        else cout << L << ' ' << R << '\n';
    }
}

int main() {
    cp_solution();
    return 0;
}