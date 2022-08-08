/*
https://codeforces.com/contest/443/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s;
    int c=0;
    getline(cin,s);
    int l = s.length();
 
    int p = count(s.begin(), s.end(),
                ' ');
 
    remove(s.begin(), s.end(),
           ' ');
 
    s.resize(l - p);
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    sort(s.begin(), s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            c++;
        }
    }
    cout<<c<<endl;
 
 
 
 
}
