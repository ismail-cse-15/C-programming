// take a number and check whether it is prime or not
#include<stdio.h>
int main()
{
    int num,i,is_prime=1;
    printf("Enter a number you want to check:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            is_prime=0;
            break;
        }
    }
    if(is_prime==0)
        printf("Number is not prime\n");
    else
    printf("Number is prime\n");

    return 0;
}
