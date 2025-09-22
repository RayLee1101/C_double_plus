#include <iostream>

using namespace std;

int main()
{
	int a=10,b=15;
	int c=a>b;
	int d=a==b;
	int e=a!=b;
	
	cout<<"a ="<<a<<"b ="<<b<<endl;
	cout<<"c=a>b	c ="<<c<<endl;
	cout<<"d=a==b	d ="<<d<<endl;
	cout<<"e=a!=b	e ="<<e<<endl;
	cout<<"c && d ="<<(c&&d)<<endl;
	cout<<"c || d ="<<(c||d)<<endl;
	cout<<"c || !e ="<<(c||!e)<<endl;
 return 0;
 }

