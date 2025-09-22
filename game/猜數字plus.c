#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() 
{
	int a,b,c=1,d;
	srand(time(0));
	printf("輸入最大值:");
	scanf("%d",&d);
	a=(rand()%("%d",d-1))+2;
	printf("猜數字!!(範圍1~%d)\n輸入一個數字:",d);
	scanf("%d",&b);
	while(1)
	{
	if(b<a&&b>=c)
	{
		c=b; 
		printf("錯了!數字太小了\n輸入數字(%d~%d):",c,d);
	}
	else if (b>a&&b<=d)
	{
		d=b;
		printf("錯了!數字太大了\n輸入數字(%d~%d):",c,d);
	}
	else if (b==a)
	{
		printf("恭喜!!答對了!!!");
		break;
	}
	else if(b<c||b>d)
	printf("就跟你說是%d~%d了!!!:",c,d);
	scanf("%d",&b);
	fflush(stdin);
	}
}
