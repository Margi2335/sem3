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
void display(struct queue *q);

int main(){
	int ch;
	int ans = 1;
	struct queue q;
	q.front = 0;
	q.rear = -1;
	
	while (ans == 1){
		printf("\n  --- QUEUE --- \n");
		printf("\n  1. INSERT \n");
		printf("\n  2. REMOVE \n");
		printf("\n  3. DISPLAY \n");
		printf("\n  4. EXIT \n");
		printf("\n ENTER YOUR CHOICE:  \n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:insert(&q);
			break;
			
			case 2:dequeue(&q);
			break;
			
			case 3:display(&q);
			break;
			
			case 4:exit(0);
		}		
		
		printf("\n DO YOU WANT TO CONTINUE??  PRESS 1 TO CONTINUE.");
		scanf("%d",&ans);
	}
	return 0;
}

void insert(struct queue *q){
	if(q->rear == max - 1 ){
		printf(" QUEUE IS OVERFLOW.");
	}
	else{
		int e;
		printf("\n ENTER THE ELEMENT :  ");
		scanf("%d",&e);
		q->items[++q->rear] = e;
	}
}

void dequeue(struct queue *q){
	if(q->front < q->rear){
	printf("\n QUEUE IS UNDERFLOW. ");
	}
	else{
		printf(" REMOVED ELEMENT = %d", q->items[q->front++]);
	}
}

void display(struct queue *q){
	 int i;
    printf("\n QUEUE : ");
    for (i = q->front; i <= q->rear; i++) {
        printf("|  %d  |", q->items[i]);
    }
}



