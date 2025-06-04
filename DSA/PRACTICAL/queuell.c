#include <stdio.h>
struct node
{
	int data;
	struct node* next;
};
struct node *front=NULL, *rear=NULL;
void main()
{
	int option;
	while((option=menu())!=4)
	{
			switch(option)
			{
				case 1:
					enqueue();
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(1);
					break;
				default:
					printf("Invalid Choice...Please try again\n");
			}
}
}

int menu(void)
{
	int choice;
	printf("1: Enqueue\n");
	printf("2: Dequeue\n");
	printf("3: Display\n");
	printf("4: Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	return choice;
}


void enqueue(void)
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
	rear->next=newnode;
	rear=newnode;
	}
}

void dequeue(void)
{
	printf("Item deleted : %d\n",front->data);
	front=front->next;
}

void display(void)
{
struct node* begin=front;
	while(begin!=NULL)
	{
		printf("%d\n",begin->data);
		begin = begin->next;
	}
}

