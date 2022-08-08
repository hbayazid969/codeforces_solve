/*
https://codeforces.com/contest/520/problem/A
*/


#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  int n,i,c=0;
  string str="";
  cin>>n;
  char s[n];
  for(i=0;i<n;i++){
    cin>>s[i];
  }
  for(i=0;i<n;i++){
    str+=s[i];
  }
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  sort(str.begin(), str.end());
  for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            continue;
        }
        else{
            c++;
        }
    }
    if(c==26)
    {
        cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl;
    }
 
 
 
}
