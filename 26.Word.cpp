/*
https://codeforces.com/contest/59/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   string s;
   int u=0,l=0;
   cin>>s;
   for(int i=0;i<s.size();i++){
    if(isupper(s[i])){
        u++;
    }
    else{
        l++;
    }
   }
   if(u>l){
    for(int i=0;i<s.size();i++){
    s[i]=toupper(s[i]);
   }
   }
   else{
     for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
   }
   }
   cout<<s;
 
}
