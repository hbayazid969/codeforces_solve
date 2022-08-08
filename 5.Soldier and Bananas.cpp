/*
https://codeforces.com/contest/546/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,hisab,res,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        hisab=k*i;
        sum+=hisab;
    }
    res = sum - n;
    if(n>sum)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<res<<endl;
    }
 
}
