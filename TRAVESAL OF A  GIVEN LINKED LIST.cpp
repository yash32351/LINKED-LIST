#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *next;
};
void linkedlisTraversal(struct node *head)
{
	node *ptr=head;
	while(ptr!=NULL){
	
	printf("The Element Atfer The termination: %d \n",ptr->data);
	ptr=ptr->next;
}
}
int main(){
	struct node *head;
	struct node *second;
	struct node *third;
   // This will allocate the memory of node in heep
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
// This is the list of head and second:	
   head->data=7;
   head->next=second;
// This the list of second and third:	
   second->data=22;
   second->next=third;
// TERMINATE THE LIST AT THE LAST NODE: 
   third->data=55;
   third->next=NULL;
   
 linkedlisTraversal(head);
}
