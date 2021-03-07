#include<stdio.h>
int main()
{


    int x=49,y=86,temp;
    printf("initial value x: %d y: %d\n",x,y);
//    without using temporary variable
    x=x+y;
    y=x-y;
    x=x-y;

    printf("after first swap x: %d y: %d\n",x,y);

//    using temporary variable
    temp=y;
    y=x;
    x=temp;
    printf("after second swap x:%d y: %d\n",x,y);



}
