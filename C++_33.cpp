#include <iostream>


using namespace std;

int main()
{
	int student[10]={58,10,69,98,39,84,29,84,76,87};
	
	for(int count=0;count<10;count++)
	{
		if(student[count] >=60)
			continue;
		cout<<count+1<<"���ǥͤ��ή�"<<"����:"<<student[count];
		cout<<endl; 
	}

 return 0;
 }

