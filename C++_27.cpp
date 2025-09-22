#include <iostream>


using namespace std;

int main()
{
	float a,b;
	char exter;
	cout<<"輸入兩個數字，(以空格區分):";
	cin>>a>>b;
	cout<<"請輸入+,-,*,/:";
	cin>>exter;
	switch(exter)
	{
	case '+':
		cout<<a<<" "<<exter<<" "<<b<<"="<<a+b;
		break;
	case '-':
		cout<<a<<" "<<exter<<" "<<b<<"="<<a-b;
		break;
	case '*':
		cout<<a<<" "<<exter<<" "<<b<<"="<<a*b;
		break;
	case '/':
		cout<<a<<" "<<exter<<" "<<b<<"="<<a/b;
		break;
	}
 return 0;
 }

