/*
https://codeforces.com/contest/791/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,hit=0;
    cin>>a>>b;
    if(a>b)
        hit=0;
    else
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            hit++;
        }
    cout<<hit<<endl;
    return 0;
}
