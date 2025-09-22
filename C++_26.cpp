#include <iostream>


using namespace std;

int main()
{
	int a;
	cout<<"目前提供的選項如下"<<endl;
	cout<<"1.漢堡"<<endl;
	cout<<"2.薯條"<<endl;
	cout<<"3.可樂"<<endl;
	cout<<"4.其他"<<endl;
	cin>>a;
	if(a==1)
	{cout<<"你選的是漢堡現在售價是75元";
	}
	else if(a==2) 
	{cout<<"你選的是薯條現在售價是45元";
	}
	else if(a==3)
	{cout<<"你選的是可樂現在售價是25元"; 
	}
	else if(a==4)
	{cout<<"現在為你搜尋其他商品...";
	}
 return 0;
 }

