#include <stdio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* top=NULL;
void main()
{
	int option;
	while((option=menu())!=4)
	{
			switch(option)
			{
				case 1:
					push();
					break;
				case 2:
					pop();
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
	printf("1: Push\n");
	printf("2: Pop\n");
	printf("3: Display\n");
	printf("4: Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	return choice;
}


void push(void)
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to push : ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}

void pop(void)
{
	if(top==NULL)
	{
		printf("Nothing to pop...List is empty");
	}
	else
	{
	printf("Popped Data : %d\n",top->data);
	top=top->next;
	}
}

void display(void)
{
	struct node* begin=top;
	while(begin!=NULL)
	{
		printf("%d\n",begin->data);
		begin = begin->next;
	}
}

