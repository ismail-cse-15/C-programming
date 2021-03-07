#include<stdio.h>
int main(){

   int *p,q,r;
   double *fq;
   q=199;
   p=&q;

   printf("%d\n",*p);
   printf("%d\n",&p);
   // this will generate an error
//   fq=&r;
//   *fq=100;
//   printf("%d\n",*fq);
//   printf("%d\n",&fq);




   return 0;


}
