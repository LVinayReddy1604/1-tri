#include<stdio.h>
#include<conio.h>

void main()  
{  
    int i, n, n1, s1=0,j,k,en,sn;  
    long fact; 

     printf("\n\n  Find Strong Numbers within an range of numbers:\n ");
     printf("------------------------------------------------------\n");

/* If sum of factorial of digits is equal to original number then it is Strong number */
  
    printf("Input starting range of number : ");  
    scanf("%d", &sn);
    printf("Input ending range of number: ");  
    scanf("%d", &en); 
    printf("\n\nThe Strong numbers are :\n"); 

 for(k=sn;k<=en;k++)
   {
     n1=k;
     s1=0;  
 
    for(j=k;j>0;j=j/10) 
    {  
  
        fact = 1;  
          for(i=1; i<=j % 10; i++)  
           {  
            fact = fact * i;  
           }  
            s1 = s1 + fact;  
    }  
  
    if(s1==n1)  
       
        printf("%d  ", n1); 
  }  
        printf("\n\n"); 
}