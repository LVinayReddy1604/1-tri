// find the sum of odd and even numbers upto 1000
#include<stdio.h>
#include<conio.h>
int main(){
	int even=0,odd=0,i;
	for (i=0;i<1001;i++){
		if(i%2==0){
			even+=i;
		}else{
			odd+=i;
		}
	}
	printf("Sum of Even Numbers: %d \n Sum of Odd Numbers: %d",even,odd);
	return 0;
}
