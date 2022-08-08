/*
https://codeforces.com/contest/58/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  string s,ss="hello";
  int a=0,b=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]==ss[a]){
        a++;
        b++;
    }
  }
  if(b==5){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
