#include<stdio.h>
#include<conio.h>
void main(){
	int flag=0;
	while(1){
		if(flag<2){
			printf("\n X1 is True");
			sleep(1);
			flag++; 
		}else{
			printf("\n X2 is False");
			sleep(1);
			flag++;
		}
		if(flag==4){
			flag=flag%4;
		}
	}
	getch();
}

