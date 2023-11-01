#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

void main()
{
	int i, temp, rem, sum=0,f;
	for(i=1;i<1000;i++){
		temp=i;
		while(temp%10 != 0){
			rem=temp%10;
			temp=temp%10;
			f=fact(rem);
			sum+=f;
		}
		if(sum==i){
			printf("%d /n",i);
		}
	}
	getch();
}
