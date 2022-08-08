/*
https://codeforces.com/contest/479/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int a,b,c;
    int arr[5];
    cin>>a>>b>>c;
    arr[0]= a+b*c;
    arr[1]= a*(b+c);
    arr[2]= a*b*c;
    arr[3]= (a+b)*c;
    arr[4]= a+b+c;
 
    for(int i=0;i<=4;i++){
       if(arr[0] < arr[i])
      arr[0] = arr[i];
    }
    cout<<arr[0]<<endl;
 
}
