
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

struct queue{
	int front,rear;
	int items[max];
};
void insert(struct queue *q);
void dequeue(struct queue *q);
void display(struct queue q);

void main(){
	int ch,ans;
	struct queue q;
	q.front=q.rear=-1;
	
	do{
		printf("\n --QUEUE-- \n");
		printf("\n  1. INSERT  \n");
		printf("\n  2. DEQUEUE  \n");
		printf("\n  3. DISPLAY  \n");
		printf("\n  4. EXIT  \n");
		printf("\n  ENTER YOUR CHOICE:  ");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert(&q);
			break;
			
			case 2:dequeue(&q);
			break;
			
			case 3:display(q);
			break;
			
			case 4:exit(0);
		}		
		
		printf("\n DO YOU WANT TO CONTINUE??  PRESS 1 TO CONTINUE.");
		scanf("%d",&ans);
	}
//	return 0;
	while(ans == 1);
}

void insert(struct queue *q){
	
//	if(q->rear == max - 1 ){
//		q->rear =0;
//	
	
	if(q->rear == max - 1 ){
		q->rear =0;
		(q->rear)++;  // rear = (rear + 1) % max
		if(q->rear == q->front ){
			printf("\n QUEUE OVERFLOW.");
			q->rear--;
		}
		else{
		int e;
		printf("\n ENTER THE ELEMENT :  ");
		scanf("%d",&e);
		q->items[q->rear] = e;
	}
}
	else{
		(q->rear)++;
		if(q->rear == q->front ){
			printf("\n QUEUE OVERFLOW.");
			q->rear--;
		}
		else{
		int e;
		printf("\n ENTER THE ELEMENT :  ");
		scanf("%d",&e);
		q->items[q->rear] = e;
		}
	}
}

void dequeue(struct queue *q){
	if(q->front == q->rear){
		printf("\n QUEUE IS UNDERFLOW.");
	}
	else{
		if(q->front == max - 1 ){
			q->front = 0;
			(q->front)++;
			printf("REMOVED ELEMENT IS = %d",q->items[q->front]);
		
		}
		else{
			(q->front)++;
			printf("REMOVED ELEMENT IS = %d",q->items[q->front]);
		}
	}
}

void display(struct queue q){
	if(q.front == q.rear){
		printf(" \n QUEUE IS EMPTY(UNDERFLOW).");
	}
	else{
		while(q.front != q.rear){
			if(q.front == max - 1){
				q.front=0;
			}
			else{
				q.front++;
			}
			printf("|  %d  | \n",q.items[q.front]);
		}
	}
}
