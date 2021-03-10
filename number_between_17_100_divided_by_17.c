//printing number from 17 to 100 divided by 17
#include<stdio.h>
int main(){
   int start ,end,i;
   start=17,end=100;
   for (i=start;i<=end;i+=1){
    if(i%17==0)
         printf("%d\n",i);

   }


   return 0;
}
