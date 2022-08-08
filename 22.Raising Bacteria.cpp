/*
https://codeforces.com/contest/579/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int d;
   cin>>d;
   int c=0;
   while(d>0){
    if(d%2==1){
        d--;
        c++;
    }
    else{
        d=d/2;
    }
   }
   cout<<c<<endl;
}
