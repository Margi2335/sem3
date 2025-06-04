#include <stdio.h>
struct node
{
	int data;
	struct node *next;
	struct node *previous;
};
void main()
{
	struct node *prevnode, *newnode, *start=NULL, *temp;
	int item;
	char choice;
	do
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data item : ");
	scanf("%d",&item);
	newnode->data = item;
	newnode->next=NULL;
	newnode->previous=NULL;
	
	if(start==NULL)
	{
		start=newnode;
		prevnode=newnode;
	}
	else
	{
		newnode->previous=prevnode;
		prevnode->next=newnode;
		prevnode=newnode;
	}
	printf("Do you have more data? (y/n) : ");
	fflush(stdin);
	scanf("%c",&choice);
}
	while(choice=='y');
	printf("Forward Printing...\n");
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	
	printf("\nBackward Printing...\n");
	temp=newnode;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->previous;
	}
}
