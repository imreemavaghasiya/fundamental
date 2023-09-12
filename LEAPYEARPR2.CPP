#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int i;
	
	cout<<"Leap Years Form 2000 to 3000"<<endl;
	
	for(i=2000;i<=3000;i++)
	  {
	  	if(i %4 == 0)
	  	{
	  		cout<<"  "<<i;
		  }
	  }
	
	
}
