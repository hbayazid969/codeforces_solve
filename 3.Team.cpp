/*
https://codeforces.com/contest/231/problem/A
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n,i,hit=0;
	int n1,n2,n3;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>n1>>n2>>n3;
		if(n1+n2+n3>=2)
		{
			hit++;
		}
		
		}
		cout<<hit<<endl;
 
}
