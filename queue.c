#include <stdio.h>
#include <stdbool.h>


int front=-1,rear=-1;
void deQUEUE(int QUEUE[],int MAXSIZE){
	if(front==-1||front>rear){
		printf("UNDERFLOW...QUEUE is empty.\n");
	}
	else{
		int item=QUEUE[front++];
		printf("ITEM DEQUEUED IS %d\n",item);
	}
}
void enQUEUE(int item,int QUEUE[],int MAXSIZE){
	if(rear==MAXSIZE-1){
	printf("OVERFLOW...Stack is full.\n");
	}
	else{	
		if(front==-1){
		front++;
		}
		QUEUE[++rear]=item;
		printf("ITEM IS INSERTED\n");
	}
}
void display(int QUEUE[],int MAXSIZE){
	if(front==-1||front>rear){
		printf("UNDERFLOW...QUEUE is empty.\n");
	}
	else{
	printf("THE ITEMS IN QUEUE IS:");
	for(int i=front;i<=rear;i++){
		printf("%d ",QUEUE[i]);
		}
		printf("\n");
	}
}
int main(){
	int MAXSIZE;
	
	printf("Enter the SIZE of QUEUE");
	scanf("%d",&MAXSIZE);
	int QUEUE[MAXSIZE];
	int operation,item;
	while(true){
	   printf("\n---OPERATIONS ON QUEUE---\n");
	   printf("1)DEQUEUE\n2)ENQUEUE\n3)DISPLAY\n4)EXIT\n");
	   printf("Enter the operation to carry out:");
	   scanf("%d",&operation);
	   switch(operation){
	   	case 1:
	   		deQUEUE(QUEUE,MAXSIZE);
	   		break;
	   	case 2:
	   		printf("Enter the item to insert:");
	   		scanf("%d",&item);
	   		enQUEUE(item,QUEUE,MAXSIZE);
	   		break;
	   	case 3:
	   		display(QUEUE,MAXSIZE);
	   		break;
	   	case 4:
	   		printf("Exiting...\n");
	   		return 0;
	   	default:
	   		printf("INVALID OPERATION");
	}
}}
