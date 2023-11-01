//C program to read the details of 10 students and store the data in a file and display the details in the output

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct student {
    char name[50];
};

int main()
{
    struct student s[10];
    int i;

    // Read the details of 10 students
    for (i = 0; i < 3; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        fflush(stdin);
    }

    // Store the data in a file
    FILE *fp;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }
    for (i = 0; i < 3; i++) {
        fprintf(fp, "%s\n", s[i].name);
    }
    fclose(fp);


	//Display the details fromt the file
	FILE *ptr;
	char prnt[100];
	ptr=fopen("students.txt","r");
	while (fgets(prnt, 100, ptr)!= NULL) {
            printf("%s", prnt);
        }
    return 0;
}
