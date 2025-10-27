#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // al things are sort in set
    // we use pushback in vector here in set we use insert as push back

    /* we canot acces set like vector here we need a iterator so we
    intialize a iterator the we print the it with * */

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // auto it = s.begin();
    // cout << *it << endl;

    // that is ranged base for loop that we use instead of iterator
    for (auto value : s)
    {
        cout << value << endl;
    }

    // if we want to find something in set
    auto it = s.find(10);
    if (it != s.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // erase
    s.erase(254);
    for (auto value : s)
    {
        cout << value << endl;
    }

    /*count is like find funcioon but count  need it and it returns
    in 0 and 1*/

    /*lowerbound is like find funtion but if it find the number it will return
    the number or if it doesnot find the it will return its imediate bigger
     number*/
    int x;
    cin >> x;
    auto it = s.lower_bound(x);
    cout << *it << endl;

    return 0;
}