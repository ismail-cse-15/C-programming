#include<stdalign.h>
int main()
{
    int row,number_row;
    char ch='*';
    for(row=5;row>0;row--){
        for(number_row=1;number_row<=row;number_row++)
            printf("%c",ch);

        printf("\n");
    }

    return 0;
}
