#include<stdio.h>

//Floyed's triangle
int main()
{
    int row,j,number=0;
    for(row=1;row<=10;row++){

        for(j=number+1;j<=(number+row);j++){
            printf("%d ",j);
        }
        printf("\n");
        number=number+row;
    }

    return 0;
}
