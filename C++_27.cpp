#include <iostream>


using namespace std;

int main()
{
	float a,b;
	char exter;
	cout<<"��J��ӼƦr�A(�H�Ů�Ϥ�):";
	cin>>a>>b;
	cout<<"�п�J+,-,*,/:";
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

