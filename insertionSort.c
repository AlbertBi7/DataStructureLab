#include <stdio.h>

int main(){
	int i,j,temp,n;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	int array[n];
	printf("Enter the Elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
		}
	printf("The Array before sorting is:");
		for(i=0;i<n;i++){
			printf("%d\t",array[i]);
		}
		printf("\n");
	for(i=1;i<n;i++){
		temp=array[i];
		for(j=i-1;j>=0&&temp<array[j];j--){
			array[j+1]=array[j];
		}
		array[j+1]=temp;
	}
		
	printf("The Array after sorting is:");
		for(i=0;i<n;i++){
			printf("%d\t",array[i]);
		}
		printf("\n");
	
}
