#include <stdio.h>

int partition(int array[],int low ,int high){
	int pivot=array[low];
	int i=low,j=high;
	while(i<j){
		
		while(array[i]<=pivot&& i<high){
		i++;}
		
		while(array[j]>pivot){
		j--;
		}
		if(i<j){
		int temp=array[i];
		array[i]=array[j];
		array[j]=temp;
		}}	
	
	array[low]=array[j];
	array[j]=pivot;
	return j;
	
	
}
void quickSort(int array[],int low,int high){
	if(low<high){
	int pi=partition(array,low,high);
	quickSort(array,low,pi-1);
	quickSort(array,pi+1,high);
	}
}
int main(){

	int i,j,n;
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
	quickSort(array,0,n-1);
	printf("The Array after sorting is:");
		for(i=0;i<n;i++){
			printf("%d\t",array[i]);
		}
		printf("\n");
		
}
