#include <stdio.h>
struct node
{
	int data;
	struct node *ptr;
};

void main()
{
	void display(struct node*);
	struct node *createList(void), *start, *createNode(void), *newnode, *temp;
	int option, pos, i, del;

	start = createList();
	display(start);
	
	while((option = menu())!=5)
	{
		switch(option)
		{
			case 1: /* Insert in beginning */
					newnode = createNode();
					start = newnode->ptr=start; start=newnode;
					break;
			case 2: /* Insert at end */
					newnode = createNode();
					temp=start;
					while(temp->ptr!=NULL)temp=temp->ptr;
					temp->ptr=newnode;
				break;
			case 3: /* Insert after a position */
					newnode = createNode();
					printf("Enter the position at which you wish to insert the new node : ");
					scanf("%d",&pos);
					temp=start;
					for(i=1; i<pos; ++i)temp=temp->ptr;
					newnode->ptr = temp->ptr;
					temp->ptr=newnode;
				break;
			case 4: /* Deletion */
			printf("Enter the item to delete : ");
			scanf("%d",&del);
			if(start->data == del) /* node to be deleted is the first item */
			{
				start = start->ptr;
			}
			else
			{
				temp=start;
				while(temp->ptr->data!=del)
				{
					temp=temp->ptr;
				}
				temp->ptr = temp->ptr->ptr;
			}
			break;
			default:
				printf("Invalid Choice....Please try again...\n");
		}
		display(start);
	}
	printf("Bye bye....");
}

void display(struct node *next2)
{
	while(next2!=NULL)
	{
		printf("%d\n",next2->data);
		next2=next2->ptr;
	}
}

int menu(void)
{
	int menu_choice;
	printf("1: Insert in beginning\n");
	printf("2: Insert at end\n");
	printf("3: Insert at any position\n");
	printf("4: Delete from the list\n");
	printf("5: Exit\n");
	printf("Enter your choice (1..4): ");
	scanf("%d",&menu_choice);
	return menu_choice;
}


struct node *createList(void)
{
	struct node *next1, *next2=NULL, *start=NULL;
	char choice;
	int item;
	do
			{
			next1 = (struct node*)malloc(sizeof(struct node));
			printf("Enter data : "); 
			scanf("%d",&item);
			next1->data=item;
			next1->ptr =NULL;
			if(start==NULL){start=next1;}
			else next2->ptr = next1;
			next2=next1;

			printf("Do you have more data? (y/n) : ");
			fflush(stdin);
			scanf("%c",&choice);
			}
	while(choice=='y' || choice=='Y');
	return start;
}

struct node* createNode(void)
{
	struct node *newnode;
	int item;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : "); 
	scanf("%d",&item);
	newnode->data=item;
	newnode->ptr =NULL;
	return newnode;
}
