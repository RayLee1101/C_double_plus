#include <iostream>


using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"輸入兌換金額:";
	cin>>a;
	b=a/100;
	c=a%100/50;
	d=a%50/10;
	cout<<"能換\t"<<b<<"張100\t"<<c<<"個50\t"<<d<<"個10"<<endl; 
 return 0;
 }

