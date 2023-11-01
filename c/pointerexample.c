#include<stdio.h>
#include<conio.h>
int main(){
	int *p;
	int n,i;
	printf("\n Enter the no. of values:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("\n Enter value - %d : ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++){
		printf("\n %d",*(p+i));
	}
	free(p);
}
