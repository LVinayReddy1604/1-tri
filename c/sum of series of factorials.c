// find the sum of the series 1/1! + 2/2! + 3/3! ...... n/n!
#include<stdio.h>
#include<conio.h>
double sum_of_series(int n){
	int i;
	double sum=0;
	for(i=1;i<=n;i++){
		sum=sum+(n/factorial(n));
	}
	return sum;
}
int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
int main(){
	int i, arr[50],n;
	double sum;
	printf("\n Enter the N value:");
	scanf("%d",&n);
	sum=sum_of_series(n);
	printf("\n The sum of the series in n/n! is: %lf",sum);
	getch();
	return 0;
}
