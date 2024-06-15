#include <stdio.h>
#include<math.h>

int main()
{
    printf("Enter the binary number");
    int bin;
    scanf("%d",&bin);
    int i=0,r=0,decimal=0;
    while(bin!=0)
    {
       r=bin%10;
       decimal=decimal+ r*pow(2,i);
       i++;
       bin=bin/10;
    }
    printf("Corresponding decimal number is:- %d",decimal);
    

    return 0;
}


