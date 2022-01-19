#include<stdio.h>
void main()
{
	int *p1,*p2,*p3,a,b,c;
       		p1=&a;
		p2=&b;
		p3=&c;
	printf("Enter two numbers: ");
	scanf("%d %d",p1,p2);
		*p3=*p1+*p2;
		printf("Sum = %d",*p3);
	printf("\n");
}
