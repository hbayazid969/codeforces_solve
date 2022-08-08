/*
https://codeforces.com/contest/703/problem/A
*/


#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   int a,b;
   int c1=0,c2=0;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>a>>b;
    if(a>b){
        c1++;
    }
    else if(a<b){
        c2++;
    }
    else{
        c1++;
        c2++;
    }
   }
   if(c1>c2){
    cout<<"Mishka"<<endl;
   }
    else if(c1<c2){
    cout<<"Chris"<<endl;
   }
   else{
    cout<<"Friendship is magic!^^"<<endl;
   }
}
