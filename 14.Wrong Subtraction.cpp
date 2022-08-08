/*
https://codeforces.com/contest/977/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n1,n2;
   cin>>n1>>n2;
   while(n2--){
    if(n1%10==0){
        n1/=10;
    }
    else{
        n1--;
    }
   }
   cout<<n1<<endl;
}
