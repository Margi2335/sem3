#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *next;
};
typedef struct node node;

void insertAtBeginning(node **list_ref, int new_info){
  node *newNode = (node *)malloc(sizeof(node));
  newNode->info = new_info;
  newNode->next = (*list_ref);

  (*list_ref) = newNode;
}

int removeAtBeginning(node **list_ref){
  node *temp = (*list_ref);
  (*list_ref) = temp->next;
  
  return temp->info;
  
  free(temp);
}

void display(node *node){
  
  while(node != NULL){
    printf("%d \n",node->info);
    node = node->next;
  }
}
int main(){
  node *list = NULL;

  int option, answer;
  do{
    printf("1. Add to Stack\n");
    printf("2. Remove from Stack\n");

    printf("Enter the option: ");
    scanf("%d", &option);
    int value , x;
    switch(option){
      case 1: 
        printf("Enter the value: ");
        scanf("%d",&value);
        insertAtBeginning(&list, value);
        break;
      case 2:
        x = removeAtBeginning(&list);
        printf("Deleted Element: %d\n" , x);
        break;
      default:
        printf("Inavalid option!!\n");
    }
    printf("Do You Want ot continue? [1 -> yes] ");
    scanf("%d", &answer);
    
  }while(answer == 1);
  
  display(list);
  
  return 0;
}
