#include <iostream>


using namespace std;

int main()
{
	int a=0;
	bool replay = false;
	do
	{
		cout<<"輸入整數:";
		cin>>a;
		cout<<"此數為基數？"<<((a%2)?'Y':'N')<<endl;
		cout<<"請問要(繼續 1 結束 0)？:";
		cin>>replay;
	}while(replay);
	 
 	return 0;
 }

