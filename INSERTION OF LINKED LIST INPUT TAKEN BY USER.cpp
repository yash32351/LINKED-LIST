#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node  *insertatbeg(struct node *head,int data)
{
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  {
  	ptr->next=head;
  	ptr->data=data;
  	return ptr;
  }
}
struct node *insertafteranode(struct node* head,int data,int index)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
}
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

void travesal(struct node *head)
{
	int i=0;
	node *ptr=head;
	while(ptr!=NULL)
	{
	printf("THE LINKED  LIST %d AFTER TRAVERSAL: %d \n",++i,ptr->data);
	ptr=ptr->next;
}
}
int main()
{
	printf("ENTER THE NUMBER OF LINKED LIST THAT YOU WANT :\n");
    int n;
    scanf("%d",&n);
    node *head,*p;
    for(int i=0;i<n;i++)
    {
    	if(i==0)
    		{
    			head=(node *)malloc(sizeof(node));
    			p=head;
			}
		else
		  {
		  	p->next=(node *)malloc(sizeof(node));
		  	p=p->next;
		  }
		  scanf("%d",&p->data);
	}
	p->next=NULL; 
	
	printf("THE LINKED LIST BEFORE TRAVERSAL:\n");
	travesal(head);
	head=InsertionEnd(head,115);
	printf("THE LINKED LIST AFTER TRAVERSAL:\n");
	travesal(head);
	
	printf("THE LINKED LIST BEFORE TRAVERSAL:\n");
	travesal(head);
	head=insertatbeg(head,100); 
	printf("THE LINKED LIST AFTER TRAVERSAL:\n");
	travesal(head);
	
	printf("THE LINKED LIST BEFORE TRAVERSAL:\n");
	travesal(head);
	head=insertafteranode(head,76,1);
	printf("THE LINKED LIST AFTER TRAVERSAL:\n");
	travesal(head);

}