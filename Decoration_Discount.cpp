#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_cost = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                int price1 = a[i];
                int price2 = a[j];

                if (j == i + 1)
                    price2 /= 2;
                else if (i == j + 1)
                    price1 /= 2;

                int total = price1 + price2;
                if (total < min_cost)
                    min_cost = total;
            }
        }

        cout << min_cost << endl;
    }

    return 0;
}
