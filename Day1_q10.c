#include <stdio.h>

int main()
{
    int a,b;
    char c;
    printf("Enter the operator:-\n");
    scanf("%c",&c);
    printf("Enter the two numbers:- ");
    scanf("%d%d",&a,&b);
    if( c=='-')
    {
        printf("Result:- %d",a-b);
    }
    if( c=='+')
    {
        printf("Result:- %d",a+b);
    }
    if( c=='*')
    {
        printf("Result:- %d",a*b);
    }
    if( c=='/')
    {
        printf("Result:- %d",a/b);
    }

    return 0;
}

