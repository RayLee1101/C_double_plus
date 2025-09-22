#include <iostream>


using namespace std;

int main()
{
	int a,b,c;
	float d;
	cout<<"輸入三個數 a,b,c:";
	cin>>a>>b>>c;
	d=(a*a+b*b)*c/ (float) (a*b*c);
	cout<<"計算結果="<<d<<endl; 
	return 0;
 }

