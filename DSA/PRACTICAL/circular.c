#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
};

void main()
{
	struct node *next1, *next2=NULL, *start=NULL, *tempStart;
	char choice;
	int item;
	do
			{
			next1 = (struct node*)malloc(sizeof(struct node));
			printf("Enter data : "); 
			scanf("%d",&item);
			next1->data=item;
			/*next1->ptr =NULL;*/
			if(start==NULL){start=next1;}
			else next2->ptr = next1;
			next2=next1;
			next2->ptr=start;

			printf("Do you have more data? (y/n) : ");
			fflush(stdin);
			scanf("%c",&choice);
			}
	while(choice=='y' || choice=='Y');
	
	tempStart= start;
	next1=start;
	do
	{
		printf("%d\t",next1->data);
		next1=next1->ptr;
	}
	while(next1!=tempStart);
	}


