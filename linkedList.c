#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int item,key;
struct node{
	int data;
	struct node*link;
}*head,*ptr1,*ptr2,*temp1,*temp,*ptr;

void InsertBeginning(){
    	printf("ENTER ITEM TO ENTER:");
	   	scanf("%d",&item);
	   	temp=(struct node*)malloc(sizeof(struct node));
	   	if(temp==NULL)printf("UNDERFLOW");
	   	else{
	   		if(head==NULL){
	   			temp->data=item;
	   			temp->link=NULL;
	   			head=temp;
	   			printf("ITEM INSERTED");
	   		}
	   		else{
	   			temp->data=item;
	   			temp->link=head;
	   			head=temp;
	   			printf("ITEM INSERTED");
	   		}
	   	}	
    
}
void InsertEnd(){
    printf("ENTER ITEM TO ENTER:");
	   		scanf("%d",&item);
	   		temp=(struct node*)malloc(sizeof(struct node));
	   		if(temp==NULL)printf("UNDERFLOW");
	   		else{
	   			if(head==NULL){
		   			temp->data=item;
		   			temp->link=NULL;
		   			head=temp;
		   			printf("ITEM INSERTED");
	   			}
		   		else{	ptr1=head;
			   		while(ptr1->link!=NULL)ptr1=ptr1->link;
			   			ptr1->link=temp;
			   			temp->link=NULL;
			   			temp->data=item;
			   			printf("ITEM INSERTED");
			   		}
	   		}	

}
void InsertBetween(){
    printf("ENTER ITEM TO ENTER:");
	   		scanf("%d",&item);
	   		printf("ENTER THE KEY VALUE AFTER WHICH YOU WANT TO ENTER THE ITEM:");
	   		scanf("%d",&key);
	   		temp=(struct node*)malloc(sizeof(struct node));
	   		if(temp==NULL)printf("UNDERFLOW");
	   		else{
	   			if(head==NULL){
		   			temp->data=item;
		   			temp->link=NULL;
		   			head=temp;
		   			printf("ITEM INSERTED");
	   			}
		   		else{	ptr1=head;
		   			while(ptr1->link!=NULL&&ptr1->data!=key)ptr1=ptr1->link;
		   		
		   			if (ptr1->link==NULL)printf("SEARCH FAILS");
		   			else{	temp->link=ptr1->link;
		   				ptr1->link=temp;
		   				temp->data=item;
		   			
		   				printf("ITEM INSERTED");
		   			}
		   		}
	   		}	
    
}
void DeleteBeginning(){
    if(temp==NULL)printf("UNDERFLOW");
	   		else{
	   			ptr1=head;
	   			if(ptr1->link==NULL){
		   			head=NULL;
		   			free(head);
		   			printf("ITEM DELETED");
	   			}else{
	   			head=ptr1->link;
	   			free(ptr1);
	   			printf("ITEM DELETED");
	   			}
	   		}

}
void DeleteEnd(){
    if(head==NULL)printf("UNDERFLOW");
	        else{
	   			ptr1=head;
	   			ptr2=ptr1->link;
	   			
	   			while(ptr2->link!=NULL){
					ptr1=ptr1->link;
					ptr2=ptr2->link;
				}
				ptr1->link=NULL;
				free(ptr2);
	   			printf("ITEM DELETED");
	   		}

}
void DeleteBetween(){
    printf("ENTER THE KEY VALUE AFTER WHICH YOU WANT TO DELETE THE ITEM:");
	   		scanf("%d",&key);
	   		if(head==NULL){printf("UNDERFLOW");}
	   		else{
	   			ptr1=head;
   			     	ptr2=ptr1->link;
   			        while(ptr1->data!=key&&ptr1->link!=NULL){
	   			     	ptr1=ptr1->link;
	   			     	ptr2=ptr2->link;
	   			     	
	   			 }if(ptr1->link==NULL)printf("SEARCGH FAIL");
	   			 else{
	   			 ptr1->link=ptr2->link;
	   			 free(ptr2);
   			     	 printf("ITEM DELETED");
   			     	}
	   		}
}
void Display(){
    ptr=head;
	   		while(ptr!=NULL){
	   			printf("%d->",ptr->data);
	   			ptr=ptr->link;
	   		}printf("NULL");

}
int main(){
	int n,item,key;
	int operation;
	while(true){
	   printf("\n---OPERATIONS ON LINKED LIST---\n");
	   printf("1)INSERTION AT BEGINNING\n2)INSERTION AT END\n3)INSERTION AT ANY POSITION\n");
	   printf("4)DELETION FROM FRONT\n5)DELETION FROM END\n6)DELETION FROM ANY POSTION\n");
	   printf("7)DISPLAY\n8)EXIT\n\n");
	   printf("Enter the operation to carry out:");
	   scanf("%d",&operation);
	   switch(operation){
	   	case 1:
            InsertBeginning();
	   		break;
	   	case 2:
	   		InsertEnd();
	   		break;
	   	case 3:
            InsertBetween();
	   		break;
	   	case 4:
	   		DeleteBeginning();
	   		break;
	   	case 5:
            DeleteEnd();
	   		break;
	   	case 6:
            DeleteBetween();
	   		break;
	   	case 7:
	   		Display();
	   		break;
	   	case 8:
	   		printf("EXITING....");
	   		return 0;
	   	default:
	   		printf("INVALID OPERATION");
	}}
}