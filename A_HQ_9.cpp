#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp.insert({10, 20});
    mp.insert({11, 20});
    mp[4] = 3;
    mp[1] = 4;
    mp[2] = 5;
    mp[3] = 6;
    // for(auto[key,value]:mp)
    // {
    // cout<<key<<"->"<<value<<endl;  // by using iterator auto
    // }

    // erase in map
    // mp.erase(4);

    
    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << "->" << value << endl;
    }

    // find in map
    // auto it = mp.find(45);
    // if (it == mp.end())
    //     cout << "value not found" << endl;
    // else
    // {
    //     cout << it->second << " " << it->first << endl;
    // }

    // erase after finding in map
    // cout << endl
    //      << endl;
    // auto it = mp.find(10);
    // if (it != mp.end())
    // {
    //     mp.erase(it);
    // }
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << it.first << "->" << it.second << endl;
    // }


    //lowerbound and greater boudn
    auto it=mp.lower_bound(5);
    cout<<it->first<<" "<<it->second<<endl;

    return 0;
}