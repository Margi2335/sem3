#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define size 5


struct node{
	int info;
	struct node *next;
};

struct node *list = NULL;

int main(){
	int c,ans;
	do{
	printf("\n  ----LINKED LIST----  \n");
	printf("\n  1. ADD NODE AT BEGINNING. \n");
	printf("\n  2. REMOVE NODE AT BEGINNING. \n");
	printf("\n  3. ADD NODE AT THE END. \n");
	printf("\n  4. REMOVE NODE AT THE END. \n");
	printf("\n  5. ADD NODE AT ANY POINT. \n");
	printf("\n  6. REMOVE NODE AT ANY POINT. \n");
	printf("\n  7. DISPLAY LINKED LIST. \n");
	printf("\n  8. EXIT. \n");
	scanf("%d",&c);
	
	switch(c){
		case 1: getnode();
		break;

		case 2:insert_begin();
		break;
		
		case 3:remove_begin();
		break;
		
		case 4:insert_end();
		break;
		
		case 5:remove_end();
		break;
		
		case 6:insert_posi();
		break;
		
		case 7:remove_posi();
		break;
		
		case 8:display();
		break;
		
		case 9:exit(0);
		
		default:printf("\n  INVALID CHOICE\n");
	}
	printf("\n DO YOU WANT TO CONTINUE?? PRESS 1 TO CONTINUE.... ");
	scanf("%d",&ans);
	}
	while(ans == 1);
	display();
	return 0;
}

void getnode(){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL){
		printf("\n THERE IS NO FREE ELEMENT. \n");
		exit(0);
	}
	else{printf("\n ENTER THE ELEMENT(INFO) FOR THE NODE.  : ");
	scanf("%d",&p->info);
	p->next = NULL;
	// if(list == NULL){
		// list = p;
	// }
	}
// 	else{
// 		q=list;
// 		while (q->next != NULL)
// 		{
// 			q = q->next;
// 		}
// 		q->next = p;
// 	}
}

int insert_begin(){
	struct node *p;
	getnode(&p);
	p->next = list;
	list = p;
}


