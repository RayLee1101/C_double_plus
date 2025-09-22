#include <iostream>

using namespace std;

int main()
{
	
	int a,b,c;
	float d,e;
	
	cout<<"請輸入三科成績:";
	cin>>a>>b>>c;
	d=a+b+c;
	e=d/3;
	
	cout<<"國文\t"<<"數學\t"<<"英文\t"<<"總分\t"<<"平均"<<endl;
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e; 
 return 0;
 }
