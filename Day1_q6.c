#include <stdio.h>

int main()
{
    printf("Enter three numbers:-");
    int n1, n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    printf("Largest number is:- %d",n1);
    else if(n2>n1 && n2>n3)
    printf("Largest number is:- %d",n2);
    else if(n3>n1 && n3>n2)
    printf("Largest number is:- %d",n3);

    return 0;
}


