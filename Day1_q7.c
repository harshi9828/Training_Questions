#include <stdio.h>

int main()
{
    printf("Enter the score");
    float score;
    scanf("%f",&score);
    if(score>89 && score<=100 )
    printf("Grade A");
    else if(score>79 && score<90 )
    printf("Grade B");
    else if(score>69 && score<80 )
    printf("Grade C");
    else if(score>59 && score<70 )
    printf("Grade D");
    else if(score<60 )
    printf("Grade F");
    return 0;
}


