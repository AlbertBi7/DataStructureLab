#include <stdio.h>
#include <stdlib.h>

struct Node{
	int coeff;
	int pow;
	struct Node*link;
};
struct Node* createNode(int coeff,int pow){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));;
	newNode->coeff=coeff;
	newNode->pow=pow;
	newNode->link=NULL;
	return newNode;
}
void AddNode(struct Node** poly ,int coeff,int pow){
	struct Node* newNode=createNode(coeff,pow);
	if(*poly==NULL){
	*poly=newNode;
	}else{
		struct Node* temp=*poly;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=newNode;

		
	}
}
struct Node* ReadPoly(){
	int coeff ,terms,pow;
	struct Node* poly=NULL;
	printf("Enter the number of terms:");
	scanf("%d",&terms);
	for(int i=0;i<terms;i++){
		printf("Enter the coeff and pow of term %d:",i+1);
		scanf("%d%d",&coeff ,&pow);
		AddNode(&poly,coeff,pow);	
		}
	return poly;
	
}
void displayPoly(struct Node* poly){
	while(poly!=NULL){
	printf("%dX^%d",poly->coeff,poly->pow);
	if(poly->link!=NULL&& poly->link->coeff>=0){
	printf("+");}
	poly=poly->link;
	}
	printf("\n");
}
struct Node* addPoly(struct Node* P, struct Node* Q){
	struct Node* R=NULL;
	while(P!=NULL&&Q!=NULL){
		if(P->pow>Q->pow){
		AddNode(&R,P->coeff,P->pow);
		P=P->link;}
		else if(P->pow<Q->pow){
		AddNode(&R,Q->coeff,Q->pow);
		Q=Q->link;}
		else{
			int sumCoeff=P->coeff+Q->coeff;
			if(sumCoeff!=0){
				AddNode(&R,sumCoeff,P->pow);
			}
			P=P->link;
			Q=Q->link;
			
		}
		}
		while(P!=NULL){
			AddNode(&R,P->coeff,P->pow);
			P=P->link;
		}
		while(Q!=NULL){
			AddNode(&R,Q->coeff,Q->pow);
			Q=Q->link;
		}
	
	
	return R;
}


int main(){
	printf("Enter the first polynomial-\n");
	struct Node* P=ReadPoly();
	printf("Enter the second polynomial-\n");
	struct Node* Q=ReadPoly();
	
	printf("Sum of the polynomial is-\n");
	struct Node* R=addPoly(P,Q);
	
	printf("First Polynomial is:-");
	displayPoly(P);
	printf("Second Polynomial is:-");
	displayPoly(Q);
	printf("Result Polynomial is:-");
	displayPoly(R);
	
	
	
}
