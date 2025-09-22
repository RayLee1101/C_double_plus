#include<stdio.h>
main()
{
	int a,b,c;
	printf("台幣轉？(1)美元(2)日幣(3)人民幣:");
	scanf("%d",&a);
	printf("輸入轉換多少錢:");
	scanf("%d",&b);
	if(a==1)
		c=b/27.84;
	else if(a==2)
		c=b/0.24;
	else if(a==3)
		c=b/4.36;
	printf("可以轉成%d元",c);		
}
