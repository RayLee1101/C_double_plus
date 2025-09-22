#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b,c,d,e;
	printf("黑白切!\n\n");
 	while(1)
 	{
		srand(time(0));
		a=(rand()%3)+1;
		d=(rand()%4)+1;
		printf("剪刀石頭布!\n(1)剪刀\t(2)石頭\t(3)布:");
		scanf("%d",&b);
		printf("電腦出的是:");
		
		switch(a)
		{
			case 1:
				printf("剪刀\n\n");
				break;
			case 2:
				printf("石頭\n\n");
				break;
			case 3:
				printf("布\n\n");
				break;
		}
			
		if(a==1&&b==1||a==2&&b==2||a==3&&b==3)
		{
			printf("平手，在加油吧!\n\n\n");
			c=0;
		}
		else if(a==1&&b==2||a==2&&b==3||a==3&&b==1)
		{
			printf("恭喜!!，你贏了!!!\n\n進入第二輪\n\n");
			c=1;
		}
		else if(a==1&&b==3||a==2&&b==1||a==3&&b==2)
		{
			printf("輸了，你真菜...\n\n才第一輪而已...\n\n");
			c=2;
		}
	
		switch(c)
		{	
			case 0:
				break;
			case 1:
				printf("選擇(1)上(2)下(3)左(4)右:");
				scanf("%d",&e);
				printf("電腦出的是:");
				if(d=1)
					printf("上\n");
				else if(d=2)
					printf("下\n");
				else if(d=3)
					printf("左\n");
				else if(d=4)
					printf("右\n");
					
				if(e==d)
					printf("恭喜你!!!大獲全勝了!!!\n\n\n");
				else if(d!=e&&e<=4)
					printf("可惜...重來吧\n\n\n");
				else if(e>4)
					printf("哪來其他選項？？？");
				break;
	
			case 2:
				printf("選擇(1)上(2)下(3)左(4)右:");
				scanf("%d",&e);
				printf("電腦出的是:");
				if(d=1)
					printf("上\n");
				else if(d=2)
					printf("下\n");
				else if(d=3)
					printf("左\n");
				else if(d=4)
					printf("右\n");
				if(e==d)
					printf("連輸...你怎麼這麼爛丫？\n\n\n");
				else if(d!=e&&e<=4)
					printf("還好...差點輸了\n\n\n");
				else if(e>4)
					printf("哪來其他選項？？？");
				break;
		fflush(stdin);
		}
	}
 }
