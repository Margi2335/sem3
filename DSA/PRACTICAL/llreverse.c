#include <stdio.h>
struct node
{
	int data;
	struct node *ptr;
};

void main()
{
	struct node *next1, *next2=NULL;
	char choice;
	int item;
	do
			{
			next1 = (struct node*)malloc(sizeof(struct node));
			printf("Enter data : "); 
			scanf("%d",&item);
			next1->data=item;
			next1->ptr=next2;	
			next2=next1;
			
			printf("Do you have more data? (y/n) : ");
			fflush(stdin);
			scanf("%c",&choice);
			}
	while(choice=='y' || choice=='Y');
	
	while(next2!=NULL)
	{
		printf("%d\n",next2->data);
		next2=next2->ptr;
	}
}


