#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*A,i,temp;
	printf("Enter number of elements:");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter %d number:", i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		if(A[i]>A[0]){
			temp=A[i];
			A[i]=A[0];
			A[0]=temp;
		}
	}
	printf("The greatest element is %d",A[0]);
	free(A);
	return 0;
}
