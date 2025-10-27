#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A;
        cin >> A;

        vector<int> pref(N+1, 0);
        for (int i = 1; i <= N; i++) {
            pref[i] = pref[i-1] + (A[i-1] - '0');
        }

        cout << pref[N] + pref[N-1] << "\n";  // <-- newline ensures separate lines
    }

    return 0;
}
