#include<stdio.h>
#include<conio.h>
int main(){
	int x=10;
	int *ptr=&x;
	int **ptr1=&ptr;
	printf("%d",*ptr);
//	printf("%d",(**ptr));
/*array-array
[][]
pointer-array
*p[]
pointer-pointer
(*p)[]	*/
int y=20;
const int *p;
p=&x;

	getch();
	return 0;
}
