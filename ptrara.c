#include<stdio.h>
#include<stdlib.h>
void main()
{
	char s1[10],s2[10];
	char *p1,*p2;
	p1=s1;
	p2=s2;
	printf("Enter a Numbers: ");
	gets(p1);
	printf("Enter another Number: ");
	gets(p2);
	while(*p1==*p2 && *s1!=0 && *s2!=0)
	{
		p1++;
		p2++;
	}
	if(*p1==*p2)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	print("\n");
}
