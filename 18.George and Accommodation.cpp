/*
https://codeforces.com/contest/467/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int p,r;
  int c1=0;
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>p>>r;
    if(r-p>=2){
        c1++;
    }
  }
  cout<<c1<<endl;
}
