#include<stdio.h>
main()
{
	float a,c,d;
	char b;
	printf("­pºâ¾÷:\n");
	scanf("%f %c %f", &a,&b,&c);
	while(1)
	{
		if (b=='+')
			d=a+c;
		else if (b=='-')
			d=a-c;
		else if (b=='*')
			d=a*c;
		else if (b=='/')
			d=a/c;	
			printf("=%f",d);
			a=d;
		fflush(stdin);
		scanf("%c %f",&b,&c);
	} 
}
