#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> word_count; 

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
 
        if (word_count.find(s) == word_count.end())
        {
            
            cout << "OK" << endl;
        }
        else
        {
          
            cout << s << word_count[s] << endl;
        }

        word_count[s]++; 
    }

    return 0;
}
