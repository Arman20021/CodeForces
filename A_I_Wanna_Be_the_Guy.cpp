#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> total;
    int size_of_a;
    cin >> size_of_a;
    for (int i = 0; i < size_of_a; i++)
    {
        int x;
        cin >> x;
        total.insert(x);
    }
    int size_of_b;
    cin >> size_of_b;
    for (int i = 0; i < size_of_b; i++)
    {
        int x;
        cin >> x;
        total.insert(x);
    }

    if (total.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}