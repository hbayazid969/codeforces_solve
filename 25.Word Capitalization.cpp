/*
https://codeforces.com/contest/281/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   string s,ss="";
   cin>>s;
   char ch = toupper(s[0]);
   for(int i=1;i<s.size();i++){
    ss+=s[i];
   }
 
   cout<<ch<<ss;;
}
 
