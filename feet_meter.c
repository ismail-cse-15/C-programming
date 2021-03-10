
//take an integer and check whether it is even or odd
#include<stdio.h>
int main(){
   int choice;
   float num;
   printf("1: Feet to meter, 2: Meter to feet");
   printf("Enter a choice:");
   scanf("%d",&choice);

   if(choice==1){
    printf("Enter number of feet :");
    scanf("%f",&num);
    printf("Meters: %.2f",num/3.28);
   }
   else{
    printf("Enter number of meters: ");
    scanf("%f",&num);
    printf("Feet: %.2f",num*3.28);
   }



   return 0;
}
