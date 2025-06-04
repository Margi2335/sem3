#include<stdio.h>
#include<conio.h>
#define max 10

struct abc{
	int item[max];
//	int rear,front;
};

struct abc a;
int rear = -1;
int front = -1;

void add(int x);
void removeitem();
void display();

int main(){
	int c,n,ans;
		
	do{
		printf("\n  --- DESCENDING PRIORITY QUEUE --- \n");
		printf("\n  1. ADD \n");
		printf("\n  2. DELETE \n");
		printf("\n  3. EXIT \n");
		printf("\n ENTER YOUR CHOICE:  \n");
		scanf("%d",&c);
		
		switch(c){
			case 1:printf("\n ENTER YOUR NUMBER:");
				scanf("%d",&n);
				add(n);
			break;
			
			case 2:removeitem();
			break;
			
			case 3:exit(0);
			
			default: printf("INVALID CHOICE!!");
		}		
		
		printf("\n DO YOU WANT TO CONTINUE??  PRESS 1 TO CONTINUE.");
		scanf("%d",&ans);
	}
	while (ans == 1);   
	return 0;
}

void add(int x){
	if(rear==max-1 ){
		printf("\n QUEUE IS FULL.");
	}
	else{
		rear++;
		a.item[rear]=x;
	}
	display();
}

void removeitem(){
	int maxindex;
	if(front == rear){
		printf("QUEUE IS EMPTY.");
	}
	else{
		int maxval = a.item[front+1]; //intitalizing maxval with the first item in the queue
		int maxindex = front + 1; // intitalizing maxindex with the index of the first item
		int i;
		for(i = front +1; i<= rear; i++){
			if(a.item[i]>maxval){
				maxval = a.item[i];
				maxindex = i;
			}
		}
	}
	
	printf("\n NUMBER BEING DELETED : %d",a.item[maxindex]);
	int i;
	for(i = maxindex; i < rear ; i++){
		a.item[i]=a.item[i++];
	}
	rear--;
	display();
}

void display(){
	if(front==rear){
		printf("QUEUE IS EMPTY.");
	}
	else{
		printf(" \n FRONT ");
		int i;
		for( i = front + 1; i<= rear ; i++){
			printf(" --> %d", a.item[i]);
		}
		printf(" <-- REAR");
	}
}
