#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() 
{
	int a,b,c=1,d;
	srand(time(0));
	printf("��J�̤j��:");
	scanf("%d",&d);
	a=(rand()%("%d",d-1))+2;
	printf("�q�Ʀr!!(�d��1~%d)\n��J�@�ӼƦr:",d);
	scanf("%d",&b);
	while(1)
	{
	if(b<a&&b>=c)
	{
		c=b; 
		printf("���F!�Ʀr�Ӥp�F\n��J�Ʀr(%d~%d):",c,d);
	}
	else if (b>a&&b<=d)
	{
		d=b;
		printf("���F!�Ʀr�Ӥj�F\n��J�Ʀr(%d~%d):",c,d);
	}
	else if (b==a)
	{
		printf("����!!����F!!!");
		break;
	}
	else if(b<c||b>d)
	printf("�N��A���O%d~%d�F!!!:",c,d);
	scanf("%d",&b);
	fflush(stdin);
	}
}
