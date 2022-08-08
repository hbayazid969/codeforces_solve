/*
https://codeforces.com/contest/734/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,i;
   int a=0,b=0,c=0;
   string s;
   cin>>n;
   cin>>s;
   for(i=0;i<n;i++){
    if(s[i]=='A'){
        a++;
    }
    else{
        b++;
    }
   }
   if(a>b){
    cout<<"Anton"<<endl;
   }
   else if(a<b){
    cout<<"Danik"<<endl;
   }
   else{
    cout<<"Friendship"<<endl;
   }
}
