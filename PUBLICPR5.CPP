#include<iostream>
#include<string>

using namespace std;



class student {
	public :
	int	id;
	int std;
	char name[100];
	char address[100];
	char contact[10];
	
};
int main()
{
	student s[100];
	int i,n;
	cout<<"how many student data enter=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter student id=";
		cin>>s[i].address;
		
		cout<<"enter student name=";
		cin>>s[i].address;
		
		cout<<"enter student standard=";
		cin>>s[i].address;
		
		cout<<"enter student address=";
		cin>>s[i].address;
	
		cout<<"enter student contact=";
		cin>>s[i].contact;
		}
		for(i=0;i<n;i++)
		{
			cout<<"student id="<<s[i].id<<endl
			    <<"student name="<<s[i].name<<endl
		        <<"student standard="<<s[i].std<<endl
			    <<"student address="<<s[i].address<<endl
			    <<"student contact="<<s[i].contact<<endl;
			
			
		}
}
