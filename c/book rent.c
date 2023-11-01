#include<conio.h>
#include<stdio.h>
int cal(int duedays,float rate){
	int i;
	float cost=0;
	for(i=0;i<duedays;i++){
		cost+=rate;
	}
	return cost;
}
int main(){
	long int number;
	int duedays,dam,d;
	float cost=0;
	char name[30],type,damage;
	printf("\n\n\n Book Rent calcultor");
	printf("\n ====================\n\n");
	printf("\n Enter the name of the customer: ");
	gets(name);
	printf("\n Enter the customer number: ");
	scanf("%ld",&number);
	printf("\n Enter the customer type: ");
	fflush(stdin);
	scanf("%c",&type);
	printf("\n Enter the due dates: ");
	fflush(stdin);
	scanf("%d",&duedays);
	printf("\n Is the book damaged?(Y or N)");
	fflush(stdin);
	scanf("%c",&damage);
	if(damage=='Y'){
		d=1;
	}else{
		d=0;
	}
	if(d==1 && type=='S'){
		cost+=1000;
		dam=1000;
	}else if(d==1 && type=='F'){
		cost+=2000;
		dam=2000;
	}
	if(type=='S'){
		if(duedays<=5){
			cost+=cal(duedays,2);
		}else if(duedays<=10){
			cost+=cal(duedays-5,2);
			cost+=cal(duedays-5,2.5);
		}else if(duedays>10){
			cost+=cal(5,2);
			cost+=cal(5,2.5);
			cost+=cal(duedays-10,3.25);
		}
	}
	if(type=='F'){
		if(duedays<=5){
			cost+=cal(duedays,4.5);
		}else if(duedays<=10){
			cost+=cal(duedays-5,4.5);
			cost+=cal(duedays-5,7.5);
		}else if(duedays>10){
			cost+=cal(5,4.5);
			cost+=cal(5,7.5);
			cost+=cal(duedays-10,10.5);
		}
	}
	printf("\n\n\n\n 		BILL");
	printf("\n =========================");
	printf("\nName: %s",name);
	printf("\n Damage cost: %d",dam);
	printf("\n Total Number of Days: %d",duedays);
	printf("\n Damage Cost: %d",dam);
	printf("\n Total cost for %d days: %.2f",duedays,cost);
	getch();
	return 0;
}
