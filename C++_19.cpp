#include <iostream>


using namespace std;

int main()
{
	int a,b,c,d;
	a=3,c=3;
	b=a++;
	cout<<b<<endl;
	d=++c;
	cout<<c<<endl;
	a=3,c=3,b=0,d=0;
	b=a--;
	cout<<b<<endl;
	d=--c;
	cout<<d<<endl;

 return 0;
 }

