#include <iostream>


using namespace std;

int main()
{
	int a,j;
	cout<<"��J�Ʀr:";
	cin>>a;

	for(int i=1;i<a;i++)
	{
		a%i;
		if(a%i==0)
		j=i;
	}
	if(j=1)
	{
		cout<<"���O���";
	}
	else
	{
		cout<<"�O���";
	}
 return 0;
 }

