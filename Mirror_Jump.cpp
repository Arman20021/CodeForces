#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        if (N == K) {
            cout << 0 << endl; 
        } else {
            cout << min(N - K, K) << endl;
        }
    }
    return 0;
}
