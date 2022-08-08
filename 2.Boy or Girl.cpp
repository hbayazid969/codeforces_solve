/*
https://codeforces.com/contest/236/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
 
 
int count_unique_char(char* str) {
 
	int hash[128] = { 0 };
	int i, c = 0;
 
	
	for (i = 0; i < strlen(str); ++i) {
		hash[str[i]] = 1;
	}
 
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}
 
	return c;
 
}
 
int main() {
 
	char str[300];
 
	gets(str);
 
    if(count_unique_char(str)%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
 
}
