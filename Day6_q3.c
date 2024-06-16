#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100],rem,rep;
    gets(str);
    int len=strlen(str);
    printf("Enter the character to remove:-");
    scanf(" %c",&rem);
    printf("\nEnter the character to replace:-");
    scanf("  %c",&rep);
    
    
    for(int i=0;i<len;i++){
        if(str[i]==rem)
        str[i]=rep;
        
    }
    printf(" %s",str);

    return 0;
}

