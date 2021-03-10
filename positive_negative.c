
//take an integer and check whether it is positive or negative
#include<stdio.h>
int main(){
   int num;
   printf("Enter a number:");
   scanf("%d",&num);

   if(num<0)
      printf("Number is negative\n");
   else
    printf("Number is non-negative\n");


   return 0;
}
