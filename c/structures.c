//write a program in C language to store the name, register, and 3 subject marks of 10 students and display the total marks of each stduent and average marks of the class
#include<stdio.h>
#include<conio.h>
struct student_name{
	char name[20];
	int regno;
	int marks[3];
};
void main(){
	int i,j,sum=0,avgsum=0;
	float avg=0;
	struct student_name class[10];
//	struct student class[10]={
//					{"Allen",123451,89,67,79},
//					{"Benny",123452,98,87,89},
//					{"Cyndi",123453,87,90,69},
//					{"Danny",123454,78,89,67},
//					{"Ellen",123455,65,98,79},
//					{"Franky",123456,89,72,93},
//					{"Garry",123457,92,82,75},
//					{"Harry",123458,84,92,85},
//					{"Indy",123459,93,84,68},
//					{"Jack",123450,79,98,78}
//	};
	for(i=0;i<2;i++){
		printf("\n\nDetails of Student %d",i+1);
		printf("\n Enter the Name of Student:");
		fflush(stdin);
		gets(class[i].name);
		printf("\n Enter the register number:");
		fflush(stdin);
		scanf("%d",&class[i].regno);
		printf("\n Enter the subject marks:");
		for(j=0;j<3;j++){
			printf("\n Enter the mark %d of Student %d:",j+1,i+1);
			fflush(stdin);
			scanf("%d",&class[i].marks[j]);
		}
	}
	printf("\n Total Marks of Each students:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			sum=sum+class[i].marks[j];
		}
		printf("\n %s : %d",class[i].name,sum);
		avgsum+=sum;
		sum=0;
	}
	avg=avgsum/i;
	printf("\n The class Average is %.2f",avg);
	getch();
	
}
