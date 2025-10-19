#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *first= NULL;
struct node *last= NULL;
void create();
void insert();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.Create\n2.insert\n3.Exit\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			case 2: insert();
			break;
			case 3: exit(0);
			default: printf("Invalid choice\n");
		}
	}
	return 0;
}
void create()
{
	int d;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data: ");
	scanf("%d",&d);
	newnode->data=d;
	newnode->prev=NULL;
	newnode->next= NULL;
	if(first ==  NULL)
	{
		first=last=newnode;
	}
	else
	{
		last->next = newnode;
		last=newnode;
	}

}
void insert()
{
	struct node *temp=first;
	printf("linked List: ");
	while(temp!= NULL)
	{
		printf("<-%d-> ",temp->data);
		temp=temp->next;
	}
	printf(" NULL\n");
}
