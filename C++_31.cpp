#include <iostream>


using namespace std;

int main()
{
	int a=0;
	bool replay = false;
	do
	{
		cout<<"��J���:";
		cin>>a;
		cout<<"���Ƭ���ơH"<<((a%2)?'Y':'N')<<endl;
		cout<<"�аݭn(�~�� 1 ���� 0)�H:";
		cin>>replay;
	}while(replay);
	 
 	return 0;
 }

