/*
https://codeforces.com/contest/1703/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   string s;
   cin>>n;
   while(n--){
    cin>>s;
   transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s=="yes"){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   }
 
}
