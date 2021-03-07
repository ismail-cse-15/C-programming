#include<stdio.h>
int main()
{


    int *x,i,y=0;
    x=&i;

    for(i=0;i<10;){

        printf("%d ",*x);
        y=y+i;
        (*x)++;
    }
  printf("\n%d\n",y);

}
