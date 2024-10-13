#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char stack[50],postfix[50],infix[50];
int top=-1,top1=-1;
char pop(){
	if(top==-1){
		printf("UNDERFLOW...Stack is empty.\n");
			return -1;
	}
	else{  char item;
		item=stack[top--];
		return item;
	}
}
void push(int ch){
	if(top>=50){
	printf("OVERFLOW...Stack is full.\n");
	}
	else{
		stack[++top]=ch;
	}
}
int priority(char ch){
	int a =-1;
	char operand[6]={'+','-','*','/','^','('};
	int prio[6]={1,1,2,2,3,3};
	for (int i=0;i<6;i++){
		if(operand[i]==ch){
		a=prio[i];
		break;
		}
	}
	return a;
	
}

int main(){
	char element ,ch;
	printf("Enter the infix expression: ");
	scanf("%[^\n]",infix);
	for (int i=0; i<strlen(infix);i++){
		ch=infix[i];
		if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
			postfix[++top1]=ch;
			}
		else if(ch=='('){
			push(ch);
			}
		else if(ch==')'){
			while((element= pop()) !='('){
				postfix[++top1]=element;
				}
		}
		else{
			while(top!=-1 && priority(ch)<=priority(stack[top])){
			 if(stack[top]=='('){
			 	break;
			 }element=pop();
			 postfix[++top1]=element;
			 }
			push(ch);
			}
			}
			while(top!=-1){
			postfix[++top1]=pop();
			}
			postfix[top++]='\0';
			printf("The Postfix expression is:%s\n",postfix);
		return 0;
}
	

