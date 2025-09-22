#include <iostream>


using namespace std;

int main()
{
	int a,j;
	cout<<"輸入數字:";
	cin>>a;

	for(int i=1;i<a;i++)
	{
		a%i;
		if(a%i==0)
		j=i;
	}
	if(j=1)
	{
		cout<<"不是質數";
	}
	else
	{
		cout<<"是質數";
	}
 return 0;
 }

