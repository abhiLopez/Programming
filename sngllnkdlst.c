#include<stdio.h>
#include<stdlib.h>
struct node
 {
	int data;
	struct node *next;
 };
 int flag;
 struct node *sp=(struct node *)0;
 void main()
 {
	void push(int);
	int pop();
	int search(int);
	int c,d,k=1,m;
	printf(" \t\t\t\tSINGLY LINKED STACK\t\t\t\t\n");
	do
	{
		printf(" \t\t\t\t 1.PUSH \t\t\t\t\n");
		printf(" \t\t\t\t 2.POP \t\t\t\t\n");
		printf(" \t\t\t\t 3.SEARCH \t\t\t\t\n");
		printf(" \t\t\t\t 4.EXIT \t\t\t\t\n");                         
		printf(" \t\t\t\tEnter Your Option:  \t\t\t\t\n");
		scanf("\t\t\t\t%d",&c);
		switch(c)
		{
			case 1:printf(" \t\t\t\tEnter Some Data to Push\n");
				scanf("\t\t\t\t%d",&d);
				push(d);
				break;
			case 2:d=pop();
					if(flag==1)
					
						printf(" \t\t\t\tPoped Item is : %d \n",d);
											
					break;
			case 3:printf(" \t\t\t\tEnter Data to Search\n");
					scanf("\t\t\t\t%d",&m);
					k=search(m);
					if(k==1)
					{
						printf(" \t\t\t\tItem Not Found.\n");
					}
						break;
				case 4: printf(" \t\t\t\tExiting From The Program\n");
   						exit(0);
			}
		}
		while(1);
}
void push(int x)
 {
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=sp;
	sp=newnode;
 }
 int pop()
 {
	int a;
 	struct node *temp;
 	if(sp==(struct node*)0)
 	{
		flag=0;
 		printf(" \t\t\t\tEmpty Stack \n");
	}
	else
	{
		a=sp->data;
		temp=sp;
		sp=sp->next;
		free(temp);
		flag=1;
	return a;
	}
 }
 int search(int x)
 {
	struct node *ptr;
	ptr=sp;
	while(ptr!=(struct node*)0)
	{
		if(ptr->data==x)
		{
			printf(" \t\t\t\tItem Found.\n");
			return 0;
		}
		ptr=ptr->next;
	}
	return 1;
}

