/*
https://codeforces.com/contest/1669/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int div[100000];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>div[i];
        if(div[i]>=1900){
            cout<<"Division 1"<<endl;
        }
         else if(div[i]>=1600 && div[i]<=1899){
            cout<<"Division 2"<<endl;
        }
         else if(div[i]>=1400 && div[i]<=1599){
            cout<<"Division 3"<<endl;
        }
         else if(div[i]<=1399){
            cout<<"Division 4"<<endl;
        }
    }
}
