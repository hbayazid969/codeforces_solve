/*
https://codeforces.com/contest/1030/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, count = 0;
    cin >> a;
    int ar[100];
    for(int i = 0; i < a; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
 
}