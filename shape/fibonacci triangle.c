#include<stdio.h>
int main()
{


    int row,i,a,b,j,c;
    printf("Enter the number of row:");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        a=0;
        b=1;
        printf("%d ",b);
        for (j =1;j<i;j++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
        printf("\b\n");
    }
}
