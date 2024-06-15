#include <stdio.h>

int main()
{
    int num1,num2,add,sub,mul,divide,mod;
    printf("Enter value for num1 and num2 for arithmetic operations");
    
    scanf("%d%d",&num1,&num2);
    
    
    //Addition
    printf("\nAddition");
    add= num1+num2;
    printf("\nThe result is:- %d",add);
    
    //Subtraction
    printf("\nSubtraction");
    sub= num1-num2;
    printf("\nThe result is:- %d",sub);
     
    //Multiplication 
    printf("\nMultiplication");
    mul= num1*num2;
    printf("\nThe result is:- %d",mul);
    
    //Division 
    printf("\nDivision");
    divide= num1/num2;
    printf("\nThe result is:- %d",divide);
    
    //Modulo
    printf("\nModulo");
    mod= num1%num2;
    printf("\nThe result is:- %d",mod);
      

    return 0;
}

