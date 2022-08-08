/*
https://codeforces.com/contest/200/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int n;
   double sum=0;
   cin>>n;
   double arr[n];
   for(int i =0;i<n;i++){
    cin>>arr[i];
   }
 
   for(int i =0;i<n;i++){
    sum+=arr[i];
   }
   cout<<sum/n<<setprecision(12);
 
}
