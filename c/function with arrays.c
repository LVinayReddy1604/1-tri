//write a program in c language to find the highest number of an array of n elements using function
#include<stdio.h>
#include<conio.h>
 int largest(int *arr,int len){
 	int largest;
 	int i;
 	largest=arr[0];
 	for(i=0;i<len;i++){
 		if(arr[i]>largest){
 			largest=arr[i];
		}
	}
	return largest;
 }
 
 void main(){
 	int largest(int *arr,int len);
 	int arr[50],size,i;
 	printf("\n Enter the size of the array:");
 	fflush(stdin);
 	scanf("%d",&size);
 	printf("\n Enter the array elements:");
 	for(i=0;i<size;i++){
 		fflush(stdin);
 		scanf("%d",&arr[i]);
	}
	 
	int large=largest(arr,size);
	printf("\n The largest number is %d",large);
	getch();
 }
