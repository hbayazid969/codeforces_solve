/*
https://codeforces.com/contest/118/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s,ss="";
   cin>>s;
   transform(s.begin(),s.end(),s.begin(),::tolower);
   for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' || 
       s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
        continue;
    }
    else{
        ss+='.';
        ss+=s[i];
    }
  }
  cout<<ss;
}
