#include<stdio.h>
int main()
{
    int row,element_row=1,space_row,i,j;
    printf("same side triangle\n");
    printf("Enter the number of raw\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
    space_row=  ((row*2)-1)-element_row;
    for(j=1;j<=space_row/2;j++)
        printf(" ");
    for(j=1;j<=element_row;j++)
        printf("*");
    element_row+=2;
    for(j=1;j<=space_row/2;j++)
        printf(" ");
    printf("\n");

    }

    return 0;
}
