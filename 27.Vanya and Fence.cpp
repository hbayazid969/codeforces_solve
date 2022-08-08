/*
https://codeforces.com/contest/677/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int n,h,c=0,d=0;
   cin>>n>>h;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(arr[i]<=h){
        c+=1;
    }
    else if(arr[i]>h){
        d+=2;
    }
   }
   cout<<c+d;
 
 
}
