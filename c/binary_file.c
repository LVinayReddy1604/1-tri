#include<stdio.h>
#include<conio.h>
struct student_name{
	char name[20];
	int regno;
	int marks[3];
};
void main(){
	int i,j;
//	struct student_name std[10];
//	FILE *xptr=fopen("a.bin","wb");
//	for(i=0;i<2;i++){
//		printf("\n\nDetails of Student %d",i+1);
//		printf("\n Enter the Name of Student:");
//		fflush(stdin);
//		gets(std[i].name);
//		printf("\n Enter the register number:");
//		fflush(stdin);
//		scanf("%d",&std[i].regno);
//		printf("\n Enter the subject marks:");
//		for(j=0;j<3;j++){
//			printf("\n Enter the mark %d of Student %d:",j+1,i+1);
//			fflush(stdin);
//			scanf("%d",&std[i].marks[j]);
//		}
//	}
//	fwrite(std,sizeof(struct student_name),10,xptr);
//	fclose(xptr);
	FILE *yptr;
	yptr=fopen("a.bin","rb");
	struct student_name x[10];
	fread(x,sizeof(struct student_name),10,yptr);
	for(i=0;i<2;i++){
		printf("\n\nDetails of Student %d",i+1);
		printf("\n Enter the Name of Student:");
		fflush(stdin);
		puts(x[i].name);
		printf("\n Enter the register number:");
		fflush(stdin);
		printf("%d",x[i].regno);
		printf("\n Enter the subject marks:");
		for(j=0;j<3;j++){
			printf("\n Enter the mark %d of Student %d:",j+1,i+1);
			fflush(stdin);
			printf("%d",x[i].marks[j]);
		}
	}
	getch();
}
