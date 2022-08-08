/*
https://codeforces.com/contest/71/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string n;
    int h;
    cin>>h;
 
    while(h--){
       cin>>n;
         int l = n.size();
        if(l>10)
    {
 
        cout<<n[0]<<l-2<<n[l-1]<<endl;
    }
    else
    {
         cout<<n<<endl;
    }
 
    }
 
 
 
 
 
}
