#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define loop(i, a, b) for (int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int first_value;
    cin >> first_value;

    int mini = first_value;
    int maxi = first_value;
    int count = 0;

    loop(i, 1, n) {
        int x;
        cin >> x;

        if (x > maxi) {
            count++;
            maxi = x;
        } 
        else if (x < mini) {
            count++;
            mini = x;
        }
    }

    cout << count << "\n";
    return 0;
}
