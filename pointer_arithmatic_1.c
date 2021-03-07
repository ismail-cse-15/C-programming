#include<stdio.h>
int main()
{

    char *cp, ch;
    int *ip ,i;
    float *fp ,f;
    double *dp, d;

    ch=&ch;
    ip=&i;
    fp= &f;
    dp= &d;


    printf("size of char =%d\n",sizeof(ch));
    printf("size of int =%d\n",sizeof(i));
    printf("size of float =%d\n",sizeof(f));
    printf("size of double =%d\n",sizeof(d));

    printf("%p %p %p %p\n",cp,ip,fp,dp);

    // increment the address value of pointer

    cp++;
    ip++;
    fp++;
    dp++;

     printf("%p %p %p %p\n",cp,ip,fp,dp);
}
