#include <stdio.h>
#include <stdbool.h>


int top=-1;
void pop(int STACK[],int MAXSIZE){
	if(top==-1){
		printf("UNDERFLOW...Stack is empty.\n");
	}
	else{
		int item=STACK[top--];
		printf("ITEM POPPED IS %d\n",item);
	}
}
void push(int item,int STACK[],int MAXSIZE){
	if(top==MAXSIZE-1){
	printf("OVERFLOW...Stack is full.\n");
	}
	else{
		STACK[++top]=item;
		printf("ITEM IS PUSHED\n");
	}
}
void display(int STACK[],int MAXSIZE){
	if(top==-1){
		printf("UNDERFLOW...Stack is empty.\n");
	}
	else{
	printf("THE ITEMS IN STACK IS:");
	for(int i=top;i>=0;i--){
		printf("%d ",STACK[i]);
		}
		printf("\n");
	}
}
int main(){
	int operation,item;
	int MAXSIZE;
	
	printf("Enter the SIZE of STACK");
	scanf("%d",&MAXSIZE);
	int STACK[MAXSIZE];
	while(true){
	   printf("\n---OPERATIONS ON STACK---\n");
	   printf("1)POP\n2)PUSH\n3)DISPLAY\n4)EXIT\n");
	   printf("Enter the operation to carry out:");
	   scanf("%d",&operation);
	   switch(operation){
	   	case 1:
	   		pop(STACK,MAXSIZE);
	   		break;
	   	case 2:
	   		printf("Enter the item to push:");
	   		scanf("%d",&item);
	   		push(item,STACK,MAXSIZE);
	   		break;
	   	case 3:
	   		display(STACK,MAXSIZE);
	   		break;
	   	case 4:
	   		printf("Exiting...\n");
	   		return 0;
	   	default:
	   		printf("INVALID OPERATION");
	}
}}
