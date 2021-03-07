#include<stdio.h>
int main()
{

    int *p,q;
    p=&q;
    q=1;

    printf("%p\n",p);

//    *p++;

    (*p)++;

    printf("%p %d\n",p,q);



    return 0;

}
