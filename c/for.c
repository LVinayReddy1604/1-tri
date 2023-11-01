/*
looping statements in C
2kinds of loopes: A.Entry Controlled Loops, B.Exit Controlled Loops
A.Entry: for,while
B.Exit:Do-while

*/
#include<stdio.h>
#include<conio.h>
int main(){
	long acc;
	int age;
	double balance;
	char gender[7];
	int i=0;
	for(i=0;i<5;i++){
		printf("\n\n %d . Enter the customer data \n",i+1);
		printf("=======================================");
		printf("\n Enter the account number: ");
		scanf("%l", &acc);
		fflush(stdin);
		printf("Enter the age: ");
		scanf("%i", &age);
		printf("Enter the account balance: ");
		scanf("%lf", &balance);
		printf("Enter the gender: ");
		gets(gender);
		scanf("%s", &gender);
		printf("\n\n\\nThe customer account number is: %l \n Age: %i \n Balance: %.2lf \n Gender: %s \n",acc,age,balance,gender);
	}	
	return 0;
}
