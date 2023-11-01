// write a program in c language to read name, register number and marks in 3 subjects of 10 students an ddisplay the details in a tabular form

#include<stdio.h>
#include<conio.h>

int main(){
	char name[5][20];
	char reg[5][10];
	int m[3][5];
	int i,j;
	for(int i=0;i<5;i++){
		printf("Enter the details of student - %d",i+1);
		printf("\nName: ");
		fflush(stdin);
		scanf("%s",name[i]);
		fflush(stdin);
		printf("register number:");
		scanf("%s",reg[i]);
		printf("Enter the 3 subject marks");
		for(j=0;j<3;j++){
			fflush(stdin);
			printf("\n subject-%d:",j+1);
			scanf("%d",&m[j][i]);
		}
	}
	printf("\n\n			CHRIST UNIVERSITY		");
	printf("\n\n====================================");
	printf("\n   Name \t\t Regno \t\t m1 \t m2 \t m3");
	for(i=0;i<5;i++){
		printf("\n %d. %s \t\t %s \t\t %d \t %d \t %d",i, name[i],reg[i],m[0][i],m[1][i],m[2][i]);
	}
	getch();
	return 0;
}
