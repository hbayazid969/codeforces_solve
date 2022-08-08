/*
https://codeforces.com/contest/581/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    int m,n,z;
    cin>>a>>b;
    m=max(a,b);
    n=min(a,b);
    cout<<n<<" ";
    z=(m-n)/2;
    cout<<z;
 
}
