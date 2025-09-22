#include <iostream>


using namespace std;

int main()
{
	int a,b,c;
	a=5,b=8,c=10;
	a=b++*(c-a)/(b-a);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
 return 0;
 }

