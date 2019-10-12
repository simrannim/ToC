//string ending with 101
#include<bits/stdc++.h>
using namespace std;
main()
{
	string str;
	cout<<"enter the string "<<endl;
	cin>>str;
	int n=str.length();
	if (str[n-1]=='1' && str[n-2]=='0' && str[n-3]=='1')
	cout<<"valid string"<<endl;
	else 
	cout<<"invalid string";
	
	
}
