#include<stdio.h>
int main(){

   int p,*q;

   p=100;
   q=&p;

   printf("%d\n",*q);
   printf("%d\n",&q);

   return 0;

}

