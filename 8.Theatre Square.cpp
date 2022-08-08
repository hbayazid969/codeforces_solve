/*
https://codeforces.com/contest/1/problem/A
*/

#include  <bits/stdc++.h>
using namespace std;
 
int main()
{
 long long int m,n,a,len,wid;
 cin>>m>>n>>a;
 len = n/a;
 if(n%a != 0)
 {
      len++;
 }
 
 wid = m/a;
 if(m%a != 0)
 {
      wid++;
 }
 cout<<len*wid<<endl;
 
}
