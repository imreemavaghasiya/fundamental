#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int i;
	char ch[100];
	
	cout<<"Enter name = ";
	cin>>ch;
	
	for(i=0;ch[i] != '\0' ; i++)
	  {
	  	if(ch[i] >= 'a' && ch[i]<='z')
	  	{
	  		ch[i] = ch[i] - 32;
		}
		else if(ch[i] >= 'A' && ch[i]<= 'Z')
		{
			ch[i] = ch[i] + 32;
		}
	  }
	  cout<<"Toggle case Name = "<<ch;
}
