#include<stdio.h>
#include<conio.h>
#define size 100

void push(struct stack *ps);
void pop(struct stack *ps);
void stacktop(struct stack *ps);
void display(struct stack *ps);


struct stack{
	int top;
	int item[size];
};

void main(){
	int ch,e;
	char ans='y';
	struct stack s;
	s.top=-1;
	clrscr();
	
	do{
		printf("\n stack ");
		printf("\n\t\t  1.push");
		printf("\n\t\t  2.pop");
		printf("\n\t\t  3.stacktop");
		printf("\n\t\t  4.display");
//		printf("\n\t\t  5.exchange");
//		printf("\n\t\t  6.peep");
		printf("\n\t\t  Enter your choise:  \n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:push(&s);
			break;
			
			case 2:pop(&s);
			break;
			
			case 3:stacktop(&s);
			break;
			
			case 4:display(&s);
			break;
			
//			case 5:exchange(&s);
//			break;
//			
//			case 6:peep(&s);
//			break;

			default: printf("\n Wrong Choise");
		}
		
		printf("\n\t\t Do You Want To Continue?? (Y/N)");
		scanf("%c",&ans);
		
	}
	
	while(ans=='y');
//	getch();
}

void pop(struct stack *ps){
	if(ps->top == -1){
        printf("\n stack is underflow ");
//        exit(1);
	}
    else{
        int x;
        x=ps->item[ps->top--];
        printf(" top value = %d",x);
    }
}

void push(struct stack *ps){
	int e;
	printf("\n enter new item:  ");
	scanf("%d",&e);
	
	if(ps->top==size-1){
		printf("\n stack overflow ");
//		exit(1);
	}
	else{
		ps->item[++ps->top]=e;
	}
}

void stacktop(struct stack *ps){
if(ps->top==-1){
	printf(" \n stack is under flow ");
	}
else{
	int x;
	x=(ps->item[ps->top]);
	printf("\n top of stack = %d",x);
	}
}

void display(struct stack *ps){
	
	if(ps->top==-1){
		printf(" \n stack is underflow");
	}
	else{
		while(ps->top==-1){
			printf("\n items on stack =%d ", ps->item[ps->top--]);
		}
	}
}


