//To Find sum of two numbers
#include<stdio.h>
 void main()
 {
		int sum(int,int),a,b,c;
		printf("Enter two No.");
		scanf("%d %d",&a,&b);
		c=sum(a,b);		
		printf("Sum of these No.'s is = %d",c);
		
		printf("\n");
		
 }
		int sum(int x,int y)
		{
		 int t;
		 t=x+y;
		 return t;
		}
