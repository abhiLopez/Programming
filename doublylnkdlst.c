#include<stdio.h>
#include<stdlib.h>

struct node //declaring a data structure named node
{
	int data;
	struct node *left,*right;
};
struct node *start=(struct node*)0;//similar of null

void main()
 {
	void insert(int);
	struct node *search(int);
	void delete(int);
	struct node *temp;
	int c,a,b;
	printf("\tDoubly Linked List Operations\n");
	do
	 {
		
		printf("\t\t1.Insert\n");
		printf("\t\t2.Search\n");
		printf("\t\t3.Delete\n");
		printf("\t\t4.Exit\n");
		printf("Enter your choice: \n");
		scanf("%d",&c);
		switch(c)
		 {
			case 1: printf("Enter a Value to Insert:\n");
				scanf("%d",&a);
				insert(a);
				break;
			case 2: printf("Enter a Value to Search:\n");
				scanf("%d",&b);
				temp=search(b);
				if(temp==(struct node*)0)
					printf("\tData Not Found..\n");
				else
					printf("\tData Found..\n");
				break;
			case 3: printf("Enter Data to Delete..\n");
				scanf("%d",&a);
				delete(a);
				//if(t==1)
			    //printf("The Deleted item is: %d\n",a);
				break;
			case 4: printf("\tExiting From Doubly..\n");
				exit(0);
		 }
	 }
	while(1);
 }

//function to insert 
void insert(int x)
 {
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));//allocating the size needed for declared structure node
	newnode->data=x;
	if(start==(struct node*)0) //case of empty list
	 {
		newnode->left=newnode->right=(struct node*)0;
		start=newnode;
	 }
	else //case of atleast one node
	 {
		newnode->left=(struct node*)0;
		newnode->right=start;
		start->left=newnode;
		start=newnode;
	 }
 }
//to search an item
struct node* search(int d)
 {
	struct node *ptr;
	ptr=start;
	while(ptr!=(struct node*)0 && ptr->data!=d)
	 {
		ptr=ptr->right;
 	 }
	return ptr;
 }

//function to delete data
void delete(int x)
 {
	struct node *t;
	t=search(x);
	printf("The Deleted item is:%d\n",t->data);
	if(t==0)
	 {
		printf("\tNo Such Data Exists..\n");
	 }
	else
	 {
		if(t==start) //case of first node
			if(t->right==(struct node*)0) //case of only one node
			 {
				start=(struct node*)0;
			 }
			else
			 {
				t->right->left=(struct node*)0;
				start=t->right;
			 }
		else if(t->right==(struct node*)0) //case of last node
		 {
			t->left->right=(struct node*)0;
		 }
		else //case of interior node
		 {
			t->left->right=t->right;
			t->right->left=t->left;
		 }
	 }
	
	free(t);
 }





