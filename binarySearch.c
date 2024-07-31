#include <stdio.h>
int main(){

	int n,x,flag=0,t=0;t++;
	printf("Enter the number of elements in the array");t++;
	scanf("%d",&n);t++;
	int left=0,right=n-1,array[n];t++;
	
	printf("Enter the elements in the array:");t++;
	for(int i=0;i<n;i++){
		t++;
		scanf("%d",&array[i]);
		t++;
	}
	
	printf("Enter the number to search:");t++;
	scanf(" %d",&x);t++;
	
	
	while(left<=right){
		t++;
		int mid=(left+right)/2;
		if (array[mid]==x){
		t++;
		flag=1;
		break;
		}
		else if(array[mid]>x){
		right=mid-1;t++;
		}
		else if(array[mid]<x){
		left=mid+1;t++;
		}
		t++;
	}
	if(flag==1){
	printf("Element is found\n");t++;
	}
	else{
	printf("Element if not found\n");t++;
	}
	t++;
	t++;
	printf("The time complexity is %d:\n",t);
	printf("The space complexity is %d:\n",24+n*4);
	return 0;

}
