// C program to store the details of the 10 students with name, regno and marks of 3 subjects
#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s[10];
    int i;

    // Read the details of 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    // Store the data in a file
    FILE *fp;
    fp = fopen("student_details.txt", "w");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }
    for (i = 0; i < 10; i++) {
        fprintf(fp, "%s %d %f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    // Display the details in the output
    FILE *ptr;
	char prnt[100];
	ptr=fopen("student_details.txt","r");
	while (fgets(prnt, 100, ptr)!= NULL) {
            printf("%s", prnt);
        }
    return 0;
}
