#include <iostream>


using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"全長,間格距離,價格:";
	cin>>a>>b>>c;
	d=((float)a/(float)b+1)*2*(float)c;
	cout<<"總價"<<d<<endl; 
 return 0;
 }

