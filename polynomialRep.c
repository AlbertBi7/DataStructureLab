#include <stdio.h>
struct Polynomial{
	int coeff;
	int expo;
	}X[3];
int main(){
	int terms,i;
	printf("Enter the number of terms:");
	scanf("%d",&terms);
	for(i=0;i<terms;i++){
		printf("Enter the coefficient of term %d:",i+1);
		scanf("%d",&X[i].coeff);
		printf("Enter the exponent of term %d:",i+1);
		scanf("%d",&X[i].expo);
	}
	printf("POLYNOMIAL IS:");
	for(i=0;i<terms;i++){
		if(X[i].coeff==0){
			continue;
		}
		if(X[i].coeff==1 && X[i].expo!=0){
			printf("x^%d",X[i].expo);
		}
		else if(X[i].expo==0&& X[i].coeff!=0){
			printf("%d",X[i].coeff);
		}
		else if(X[i].coeff!=0&& X[i].expo==1){
			printf("%dx",X[i].coeff);
		}
		else{
			printf("%dx^%d",X[i].coeff,X[i].expo);
		}
		if ((i!=terms-1)&& (X[i+1].coeff!=0)){
			printf(" + ");
		}
	}
	printf("\n");	
	
	return 0;
}
