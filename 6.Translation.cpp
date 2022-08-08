/*
https://codeforces.com/contest/41/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
string getrevstr(string str);
int main()
{
    string str,rev_str,str2;
    cin>>str>>str2;
    rev_str = getrevstr(str);
    if(str2 == rev_str)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
}
 
string getrevstr(string str)
{
    int str_length = str.size();
    for(int i=0;i<str_length/2;i++)
    {
        char temp = str[i];
        str[i]=str[str_length-1-i];
        str[str_length-1-i]= temp;
    }
    return str;
}
