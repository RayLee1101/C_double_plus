#include <iostream>

using namespace std;

int main()
{

	short	int number1=0200;
	int	number2=0x33f;
	long int	number3=1234567890;
	unsigned long int number4=97654321;
	
	cout<<"�u���="<<number1<<"�ҥe�줸��:"<<sizeof(number1)<<endl;
	cout<<"���="<<number2<<"�ҥe�줸��:"<<sizeof(number2)<<endl;
	cout<<"�����="<<number3<<"�ҥe�줸��"<<sizeof(number3)<<endl;
	cout<<"�L�������="<<number4<<"�ҥe�줸��"<<sizeof(number4)<<endl; 
 return 0;
 }

