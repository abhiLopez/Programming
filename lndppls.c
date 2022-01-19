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
		printf(" 1.PUSH\n");
		printf(" 2.POP\n");
		printf(" 3.SEARCH\n");
		printf(" 4.EXIT\n");                         
		printf("Enter Your Option: \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:printf("Enter Some Data to Push\n");
				scanf("%d",&d);
				push(d);
				break;
			case 2:
					d=pop();
					if(flag==1)
					
						printf("Poped Item is : %d \n",d);
											
					break;
			case 3:printf("Enter Data to Search\n");
					scanf("%d",&m);
					k=search(m);
					if(k==1)
					{
						printf("Item Not Found.\n");
					}
						break;
				case 4: printf("Exiting From The Prgm\n");
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
 		printf("Empty Stack \n");
	}
	else
	{
		a=sp->data;
		temp=sp;
		sp=sp->next;
		free(temp);
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
			printf("Item Found.\n");
			return 0;
		}
		ptr=ptr->next;
	}
	return 1;
}

