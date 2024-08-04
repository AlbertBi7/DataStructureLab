#include <stdio.h>

int main(){
	int i,n,pass,t=1;
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
	
	
	for(pass=0;pass<n-1;pass++){
		t++;
		for(i=0;i<n-pass-1;i++){
			t++;
			if(array[i]>array[i+1]){
				int temp=array[i];t++;
				array[i]=array[i+1];t++;
				array[i+1]=temp;t++;
				}
			t++;
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
	printf("The space complexity is :%d\n",(5+n)*4);
	
	return 0;
	}