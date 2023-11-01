//wite a program in c language to find the sum of 2 3by4 matrix and display the result in a formatted way
#include<stdio.h>
#include<conio.h>
int main(){
	int m1[3][4],m2[3][4],result[3][4],i,j;
	printf("\n Enter the matrix-1 values");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n Enter the matrix-2 values");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			result[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("\n \t\t Matrix-1 \t\t Matrix-2 \t\t Sum-of-Matrices\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d \t",result[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
