#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter the number:- ");
    scanf("%d",&num);
    while(num>0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("The sum is:- %d ",sum);
    

    return 0;
}


