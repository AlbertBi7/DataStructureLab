#include <stdio.h>

int main(){
	int i,n,s,j,t=1;
	t++;
	printf("Enter the number of elements in the array:");t++;
	scanf("%d",&n);t++;
	
	int array[n];
	printf("Enter the elements in the array:");t++;
	
	for(i=0;i<n;i++){
		t++;
		scanf("%d",&array[i]);
		t++;
	}
	
	for(i=0;i<n-1;i++){
		s=i;t++;
		for(j=1+i;j<n;j++,t++){
			
			if(array[s]>array[j]){
				s=j;t++;
				}
			}
			
			if(i!=s){
			int temp=array[i];t++;
			array[i]=array[s];t++;
			array[s]=temp;t++;
			}
			t++;
	}
			
			
	
	
	printf("Elements in the array after Sorting:");t++;
	for(i=0;i<n;i++){
	 	t++;
		printf(" %d",array[i]);
		t++;
	}
	t++;
	t++;
	printf("\nThe time complexity is :%d\n",t);
	printf("The space complexity is :%d\n",(6+n)*4);
	
	return 0;
	}