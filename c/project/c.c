#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//for exit()
#include <time.h>//for date
void time(){
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf(" Time: %s", asctime(tm));
}
void generate(){
	char name[20],itmname[30];
	int num,i,qty;
	float unitprice,totalprice=0;
//	clrscr();
	printf("\n\n\n Customer Name: \t");
	fflush(stdin);
	gets(name);
	printf("Number of Items Puerchased:\t");
	fflush(stdin);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		printf("\n\n Enter Item %d Name:\t \t",i);
		fflush(stdin);
		gets(itmname);
		printf("Enter the unit price \t\t");
		fflush(stdin);
		scanf("%f",&unitprice);
		printf("Enter the Quantity of purchase \t\t");
		fflush(stdin);
		scanf("%d",&qty);
		total+=unitprice*qty;
	}
	printf("\n\n\n\n\n\n");
	printf("===========================CU-Mart====================\n");
	time();
	printf("\n Invoice To: %s\n",name);
	printf("-------------------------------------------------------\n");
	printf("Items \t\t\t Qty \t\t\t Total\n");
	printf("-------------------------------------------------------\n");
	printf("\n");
	for(i=0;i<=num;i++){
		printf("%s",itmname);
		printf("\t\t\t%d",qty);
		printf("\t\t\t%.2f",)
	}
}	
int main(){
	int choice;
	printf("====================CU-Mart=============\n\n");
	printf("  Please select your prefered operation:\n\n");
	printf("1. Generate Invoice\n");
	printf("2. Show all Invoices\n");
	printf("3. Search an Invoice\n");
	printf("4. Exit\n\n");
	printf("Your choice:\t");
	fflush(stdin);
	scanf("%d",&choice);
	switch(choice){
		case 1: generate();
				break;
		case 2:break;
		case 3:break;
		case 4:exit(1);
		default:printf("Invalid Input\n");
	}
	getch();
	return 0;
}
