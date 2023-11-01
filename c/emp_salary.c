#include<stdio.h>
#include<conio.h>

int main()
{
	float Basic,DA,HRA,Gross,Net,Tax,Final;
	int ID;
	char Name[25],Position[25];
	printf("\n Enter the employee Name: ");
	scanf("%s",Name);
	printf("\n Enter the employee-ID: ");
	fflush(stdin);
	scanf("%d",&ID);
	printf("\n Enter the employee-position: ");
	scanf("%s",Position);
	fflush(stdin);
	printf("\n Enter the basic salary of the employee: ");
	scanf("%f",&Basic);
	DA=Basic*0.06;
	HRA=Basic*0.12;
	Tax=Basic*0.18;
	Final=Basic-DA-HRA-Tax;
	printf("\n\n\n Salary Details \n");
	printf("=======================");
	printf("\n Name: %s",Name);
	printf("\n Employee-ID: %d",ID);
	printf("\n Employee-position: %s",Position);
	printf("\n Basic-salary: %.2f",Basic);
	printf("\n DA: %.2f",DA);
	printf("\n HRA: %.2f",HRA);
	printf("\n Tax: %.2f",Tax);
	printf("\n Final Salary: %.2f",Final);	
	getch();
	return 0;
}
