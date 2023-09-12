#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char a;
	
	cout<<"===Given Input is Numeric and not Numeric==="<<endl;
	
	cout<<"Enter Value = ";
	cin>>a;
	
	if(a>='0' && a<='9')
	{
		cout<<"Enter Value is Numeric"<<endl;
	}
	else
	{
		cout<<"Enter Value is not Numeric"<<endl;
	}
	
}
