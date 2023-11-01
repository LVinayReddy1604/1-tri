#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		fflush(stdin);
	}
	if(a[0]==a[1]==a[2]==a[3]==a[4]==a[5]==a[6]==a[7]==a[8]==a[9]){
		printf("All numbers are same");
	}
	else{
		printf("Numbers are not same");
	}
	getch();
}
