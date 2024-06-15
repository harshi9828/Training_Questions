#include <stdio.h>
#include <math.h>

int main()
{
    int num,sq,N,count=0,mod=0,digit=0;
    printf("Enter the number:-");
    scanf("%d",&num);
    sq=num*num;
    printf("\n%d",sq);
    N=num;
    while(num>0){
        count++;
        num=num/10;
        
    }
   
    mod=pow(10,count);
    digit=sq%mod;
    if(N==digit)
    printf("\nAutomorphic Number");
    else
    printf("\nNot Automorphic Number");
    

    return 0;
}



