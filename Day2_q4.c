#include <stdio.h>
#include<math.h>

int main()
{
    int num,count=0,r=0,n,sum=0,z;
    printf("Enter the number:-");
    scanf("%d",&num);
    n=num;
    z=num;
    
    while(num>0)
    {
        count++;
        num=num/10;
    }
    while(n>0)
    {
        r=pow((n%10),count);
        sum=sum+r;
        n=n/10;
    }
    if(z==sum)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    
    

    return 0;
}


