#include <iostream>


using namespace std;

int main()
{
	int sum=0;
	for(int i=1;i<=200;i=i+2)
	{if(i==101)
	break;
	sum+=i; 
	}
	cout<<"1~99������`�M:"<<sum;
 

 return 0;
 }

