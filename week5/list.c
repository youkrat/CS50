#include <stdio.h>
#include <stdlib.h>

// struct node creates a data structure named node
//typedef struct node renames it to node
typedef struct node{

    int number;
    struct node *next; //stores the adress of the next node 

} node;

int main (void){
      node *list = NULL;

      for( int i = 0; i < 3; i++){
        node *n = malloc(sizeof(node));

        if (n == NULL){
            return 1;
        }

        printf("Number: ");
        scanf("%d", &n -> number);
        n -> next = list;
        
        list = n;
      }

      node *ptr = list;
      while (ptr != NULL){

        printf("%i\n", ptr -> number);
        ptr = ptr -> next;
      }
}