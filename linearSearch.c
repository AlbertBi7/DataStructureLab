#include <stdio.h>

int main(){
	int i,n,x,count=0,t=0;
	t++;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	t++;
	t++;
	int array[n];
	printf("Enter the elements in the array:");
	t++;
	for(i=0;i<n;i++){
		t++;
		scanf("%d",&array[i]);
		t++;
	}
	/*printf("Elements in the array:");
	for(i=0;i<n;i++){
	printf("%d ",array[i]);
	}*/
	
	printf("Enter the number to search:");
	scanf("%d",&x);
	t++;t++;
	
	for(i=0;i<n;i++){
	if (array[i]==x){
		t++;
		count++;
		printf("the element is found at position:%d\n",i+1);
   		t++;	
	}
	}
	
	if(count>0){
		t++;
		printf("The element is found and is present %d times\n",count);
	}
	else{
		t++;
		printf("The element is not found\n");
	}
	t++;
	t++;
	printf("The time complexity is %d:\n",t);
	printf("The space complexity is %d:\n",(5+n)*4);
	
	return 0;
	}
