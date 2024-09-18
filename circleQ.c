#include <stdio.h>
#include <stdbool.h>

int item;
int front=-1,rear=-1;
void deQUEUE(int QUEUE[],int MAXSIZE){
	if(front==-1){
		printf("UNDERFLOW...QUEUE is empty.\n");
	}
	else if(front==rear){
		item=QUEUE[front];
		front=-1;
		rear=-1;
		printf("ITEM DEQUEUED IS %d\n",item);
		}
	else{
		item=QUEUE[front];
		front=(front+1)%MAXSIZE;
		printf("ITEM DEQUEUED IS %d\n",item);
		}

}
void enQUEUE(int item,int QUEUE[],int MAXSIZE){
	if(front==(rear+1)%MAXSIZE){
	printf("OVERFLOW...QUEUE is full.\n");
	}
	else{	
		if(front==-1){
		front++;
		}
		rear=(rear+1)%MAXSIZE;
		QUEUE[rear]=item;
		printf("ITEM IS INSERTED\n");
	}
}
void display(int QUEUE[],int MAXSIZE){
	if(front==-1){
		printf("UNDERFLOW...QUEUE is empty.\n");
	}
	else{
	printf("THE ITEMS IN QUEUE IS:");
	
	int i=front;
	while(true){
		printf("%d ",QUEUE[i]);
		if(i==rear) break;
		i=(i+1)%MAXSIZE;
		
	}
	}
}
int main(){
	int MAXSIZE;
	
	printf("Enter the SIZE of CIRCULAR QUEUE:");
	scanf("%d",&MAXSIZE);
	int QUEUE[MAXSIZE];
	int operation;
	while(true){
	   printf("\n---OPERATIONS ON CIRCULAR QUEUE---\n");
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
