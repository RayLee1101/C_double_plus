#include <stdio.h>
#include <stdlib.h>

typedef float (*Op)(float, float);


float add(float a, float b) {
	return a+b;
}

float dsd(float a, float b) {
	return a-b;
}

float klk(float a, float b) {
	return a*b;
}

float ede(float a, float b) {
	return a / b;
}

int main() {
	float a,b;
	char c;
	printf("��J�Ʀr:\n");
	scanf("%f", &a);
	fflush(stdin);
	printf("+,-,*,/:\n");
	scanf("%c",&c);
	printf("��J�Ʀr:");
	scanf("%f", &b);
	
	
	
	if(c=='+')
	{	Op op = add;
		printf("%f\n", op(a, b));
	}
	else if (c=='-')
	{ 
		Op op = dsd;
	printf("%f\n", op(a, b));
	} 
	else if (c=='*')
	{ 
		Op op = klk;
	printf("%f\n", op(a, b));
	} 
	else if (c=='/')
	{ 
		Op op = ede;
		printf("%f\n", op(a, b));
	} 
	return 0;
}
