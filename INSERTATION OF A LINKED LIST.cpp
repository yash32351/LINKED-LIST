#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
};
void LinkedListTravesal(struct node *head)
{
	node *ptr=head;
	while(ptr!=NULL){
	printf("The Linked List after travesal:%d\n",ptr->data);
	ptr=ptr->next;
}
}  
 //INSERTION OF A NODE AT THE BEGGINING IN THE GIVEN LINKED LIST
struct node * Insertion(struct node *head,int data)
{
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  ptr->next=head;
  ptr->data=data;
  return ptr;
}
 // INSERTION AT A NODE AFTER A GIVEN NODE:
struct node * Insertionafter(struct node *head,int data,int index )
{
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   // we don't want t0 lose our head so we are pointing to this in the p:
   struct node * p=head;
   int i=0;
   while(i!=index-1)
   {
   	p=p->next ;
    i++;
   }
   ptr->data=data;
   ptr->next=p->next;
   p->next=ptr;   
 }
// INSERTION AT THE END OF THE LINKED LIST	  
struct node * InsertionEnd(struct node *head,int data)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	node *p=head;
	
		while(p->next!=NULL){
		p=p->next;
}
    p->next=ptr;
	ptr->next=NULL;
	return head;
}


int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	// ALLOCATING THE MEMORY OF THE NODE OF THE LINKED LIST 
	head= (struct node*)malloc(sizeof(struct node));
	second= (struct node*)malloc(sizeof(struct node));
	third= (struct node*)malloc(sizeof(struct node));
	
	head->data=56;
	head->next=second;
	
	second->data=69;	
	second->next=third;
	
	third->data=89;
	third->next=NULL;
	
   printf("Linked List before insertion: \n");
  // OUTPUT OF THE INSERTION OF A LINKED LIST AT THE BEGINING
  LinkedListTravesal(head);
  head = Insertion(head,55);
  printf("Linked List after insertion: \n");
  LinkedListTravesal(head);
  //OUTPUT OF THE INSERTION AFTER A GIVEN NODE OF A LINKED LIST
  LinkedListTravesal(head);
  head= Insertionafter(head,201,2);
  printf("Linked List after insertion: \n");
  LinkedListTravesal(head);
  // OUTPUT OF THE  INSERTION AT THE END OF THE LINKED LIST	  
  head=InsertionEnd(head,301);
  printf("Linked List after insertion: \n");
  LinkedListTravesal(head);
 
}