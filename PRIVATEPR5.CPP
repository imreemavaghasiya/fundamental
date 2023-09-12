#include<iostream>
#include<string>

using namespace std;



class student {
	private :
	int	id;
	int post;
	char name[100];
	char address[100];
	int contact[10];
	int salary[10];
	
};
int main()
{
	student s[100];
	int i,n;
	cout<<"how many employees data enter=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter employees id=";
		cin>>s[i].id;
		
		cout<<"enter employees name=";
		cin>>s[i].name;
		
		cout<<"enter employees post=";
		cin>>s[i].post;
		
		cout<<"enter employees address=";
		cin>>s[i].address;
	
		cout<<"enter employees contact=";
		cin>>s[i].contact;
		
		cout<<"enter employees salary=";
		cin>>s[i].salary;
		
		}
		for(i=0;i<n;i++)
		{
			cout<<"employees id="<<s[i].id<<endl
			    <<"employees name="<<s[i].name<<endl
		        <<"employees post="<<s[i].post<<endl
			    <<"employees address="<<s[i].address<<endl
			    <<"employees contact="<<s[i].contact<<endl
			    <<"employees salary="<<s[i].salary<<endl
				
				
			
			
		}
}
