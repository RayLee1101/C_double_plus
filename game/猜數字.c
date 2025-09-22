#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	while(1)
	{
		printf("輸入數字:");
		scanf("%d",&b);
		if(a<b)
		{
			printf("數字太大了!\n");
		} 
		else if (a>b)
		{
			printf("數字太小了!\n");
		}
		else if(a==b)
		{
			printf("恭喜答對了!!!\n");
			break;
		}
		fflush(stdin);
	}
} 
