#include<stdio.h>
main()
{
	int a,b,c;
	printf("�x����H(1)����(2)���(3)�H����:");
	scanf("%d",&a);
	printf("��J�ഫ�h�ֿ�:");
	scanf("%d",&b);
	if(a==1)
		c=b/27.84;
	else if(a==2)
		c=b/0.24;
	else if(a==3)
		c=b/4.36;
	printf("�i�H�ন%d��",c);		
}
