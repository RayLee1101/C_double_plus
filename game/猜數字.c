#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	while(1)
	{
		printf("��J�Ʀr:");
		scanf("%d",&b);
		if(a<b)
		{
			printf("�Ʀr�Ӥj�F!\n");
		} 
		else if (a>b)
		{
			printf("�Ʀr�Ӥp�F!\n");
		}
		else if(a==b)
		{
			printf("���ߵ���F!!!\n");
			break;
		}
		fflush(stdin);
	}
} 
