#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a,b,c values";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<"largest is:"<<a;
	}
	else if(b>a&&b>c)
	{
		cout<<"largest is:"<<b;
	}
	else
	{
	    cout<<"largest is:"<<c;
	}
	return 0;
}
