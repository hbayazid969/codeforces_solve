/*
https://codeforces.com/contest/96/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string n;
   int sum,i;
   int a=0,b=0,c=0;
   cin>>n;
   for(i=0;i<n.size();i++){
    if(n[i]=='1'){
        a++;
        b=0;
    }
    else{
        b++;
        a=0;
    }
    if(a==7 || b==7){
        c=1;
    }
   }
    if(c==1){
        cout<<"YES";
    }
    else{
        cout<<"NO"<<endl;
    }
}
