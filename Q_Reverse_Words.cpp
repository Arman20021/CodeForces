 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
  
string a;
getline(cin,a);
stringstream ss(a);
string word;
ss>>word;
reverse(word.begin(),word.end());
cout<<word;
while(ss>>word)
{
    reverse(word.begin(),word.end());
    cout<<" "<<word;

}
     return 0;
 }