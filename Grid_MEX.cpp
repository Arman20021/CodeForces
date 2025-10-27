#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<vector<int>> grid(N, vector<int>(N));
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                grid[i][j] = (i + j) % N;
            }
        }
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << grid[i][j];
                if (j < N - 1) cout << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}