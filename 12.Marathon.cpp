/*
https://codeforces.com/contest/1692/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c,d;
    int t,sum;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        sum=0;
        sum+=(b>a);
        sum+=(c>a);
        sum+=(d>a);
        cout<<sum<<endl;
    }
 
 
 
}
