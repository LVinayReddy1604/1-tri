// 
#include<conio.h>
#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
	int *p;
	p=&x;
	printf("\n %p",p); //%p is used for printing the address values
	printf("\n %p",&x);
	printf("\n %d",*p);
	y=*p;
	printf("\n %d",y);
	return 0;
}
