#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b,c,d,e;
	printf("�¥դ�!\n\n");
 	while(1)
 	{
		srand(time(0));
		a=(rand()%3)+1;
		d=(rand()%4)+1;
		printf("�ŤM���Y��!\n(1)�ŤM\t(2)���Y\t(3)��:");
		scanf("%d",&b);
		printf("�q���X���O:");
		
		switch(a)
		{
			case 1:
				printf("�ŤM\n\n");
				break;
			case 2:
				printf("���Y\n\n");
				break;
			case 3:
				printf("��\n\n");
				break;
		}
			
		if(a==1&&b==1||a==2&&b==2||a==3&&b==3)
		{
			printf("����A�b�[�o�a!\n\n\n");
			c=0;
		}
		else if(a==1&&b==2||a==2&&b==3||a==3&&b==1)
		{
			printf("����!!�A�AĹ�F!!!\n\n�i�J�ĤG��\n\n");
			c=1;
		}
		else if(a==1&&b==3||a==2&&b==1||a==3&&b==2)
		{
			printf("��F�A�A�u��...\n\n�~�Ĥ@���Ӥw...\n\n");
			c=2;
		}
	
		switch(c)
		{	
			case 0:
				break;
			case 1:
				printf("���(1)�W(2)�U(3)��(4)�k:");
				scanf("%d",&e);
				printf("�q���X���O:");
				if(d=1)
					printf("�W\n");
				else if(d=2)
					printf("�U\n");
				else if(d=3)
					printf("��\n");
				else if(d=4)
					printf("�k\n");
					
				if(e==d)
					printf("���ߧA!!!�j����ӤF!!!\n\n\n");
				else if(d!=e&&e<=4)
					printf("�i��...���ӧa\n\n\n");
				else if(e>4)
					printf("���Ө�L�ﶵ�H�H�H");
				break;
	
			case 2:
				printf("���(1)�W(2)�U(3)��(4)�k:");
				scanf("%d",&e);
				printf("�q���X���O:");
				if(d=1)
					printf("�W\n");
				else if(d=2)
					printf("�U\n");
				else if(d=3)
					printf("��\n");
				else if(d=4)
					printf("�k\n");
				if(e==d)
					printf("�s��...�A���o����X�H\n\n\n");
				else if(d!=e&&e<=4)
					printf("�٦n...�t�I��F\n\n\n");
				else if(e>4)
					printf("���Ө�L�ﶵ�H�H�H");
				break;
		fflush(stdin);
		}
	}
 }
