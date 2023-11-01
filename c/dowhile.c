//create a menu driven program in c language to impliment a calculator with 5 options 
//1.addition
//2.subtraction
//3.division
//4.multiplication
//5.exit

#include<stdio.h>
#include<conio.h>

int main(){
	int choice,op1,op2,res;
	do{
		printf("\n\n Calculator: ");
		printf("\n ===========");
		printf("\n 1.addition \n 2.subtraction \n 3.division \n 4.multiplication \n 5.exit");
		printf("\n Enter Your choice:");
		scanf("%d", &choice);
		if(choice>4 || choice<1){
			break;
		}
		printf("\n Enter the first operand: ");
			scanf("%d", &op1);
			printf("\n Enter the second operand: ");
			scanf("%d", &op2);
		if(choice==1){
			res=op1+op2;
			printf("%d + %d = %d", op1,op2,res);
		}
		else if(choice==2){
			res=op1-op2;
			printf("%d - %d = %d", op1,op2,res);
		}
		else if(choice==3){
			res=op1/op2;
			printf("%d / %d = %d", op1,op2,res);
		}
		else if(choice==4){
			res=op1*op2;
			printf("%d * %d = %d", op1,op2,res);
		}else{
			break;
		}
	}while(1);
	printf("\n\n Outside the calculator");
	getch();
	return 0;
}
