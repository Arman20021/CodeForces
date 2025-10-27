    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string a;
        cin >> a;

        int b = (int) a.find("0000000");  
        int c = (int) a.find("1111111");
        if (b != -1 || c != -1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        return 0;
    }
