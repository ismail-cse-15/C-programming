#include<stdio.h>
int main()
{
    int row, number_per_row;
    char ch='*';
    for(row=1;row<=5;row++){
        for(number_per_row=1;number_per_row<=row;number_per_row++)
            printf("%c",ch);

        printf("\n");
    }

    return 0;
}
