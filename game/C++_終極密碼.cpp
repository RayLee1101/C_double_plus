#include <iostream>


using namespace std;

int main()
{
	int a,b,c,d,e;
	c=1;
	cout<<"請輸入你的最大值:"<<endl;
	cin>>d;
	cout<<"輸入你的終極密碼:"<<endl;
	cin>>a;
	cout<<"請在"<<c<<"~"<<d<<"選一個數字:"<<endl;
	for(;b=a;)
	{
	cin>>b;
	(a!=b&&a>b)?c=b:d=b;
	a==b ?cout<<"恭喜對了!!!":cout<<"可惜答錯了...，在"<<c<<"~"<<d<<"之間選一個數字:"<<endl;
	}
 return 0;
 }
