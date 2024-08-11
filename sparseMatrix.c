#include <stdio.h>

int main(){
	int i,j,row,col,k=1 ,count =0;
	
	printf("Enter the number of elements in the array:");
	scanf("%d%d",&row,&col);
	
	int A[row][col];
	printf("Enter the elements in the array:");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&A[i][j]);
		
			if(A[i][j]!=0){
				count++;
			}
		}
	}
	printf("Elements in the array are:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	int B[count+1][3];
	
	B[0][0]=row;
	B[0][1]=col;
	B[0][2]=count;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(A[i][j]!=0){
				B[k][0]=i;
				B[k][1]=j;
				B[k][2]=A[i][j];
				k++;
			}
		}
	}
	
	
	printf("Row\tColumn\tValue\n");
	
	for(i=0;i<count+1;i++){
		printf("%d\t%d\t%d\n",B[i][0],B[i][1],B[i][2]);
		printf("\n");
	}
	
	return 0;
	}
