#include <iostream>


using namespace std;

int main()
{
	int i,j,sum=1;
	for(i=0;i<=10;i++)
	{
	for(j=i;j>0;j--)
		sum*=j;
		cout<<i<<"!="<<sum<<endl;
		sum=1;		
	}

 return 0;
 }

