/*Loops*/

#include<iostream>
using namespace std;
int main()
{

		//declare the variables
	int a,b,m;
		//asking for the inputs
	cout << "please enter the mumber of apples that you have bought ";

	cin>>a;
		//give the conditions
	while (a>=5 and a<=95)
	{
		m=20-(a/5);
		b=100-(a+m);
		cout<<"number of mangoes"<<m<<endl;
		cout<<"number of bananas"<<b<<endl;
		break;
	}
        while (a>=1 and a<5)
	{
		m=21-a;
  		b=100-(a+m);
		cout<<"number of mangoes"<<m<<endl;
		cout<<"number of bananas"<<b<<endl;
		break;
	}
	 while (a>=95 and a<101)
	{
		m=1-(a/97);
  		b=100-(a+m);
		cout<<"number of mangoes"<<m<<endl;
		cout<<"number of bananas"<<b<<endl;
		break;
	}
		
	return 0;
}


