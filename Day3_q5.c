#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100],*token, *s1[100];
    int j=0;
    gets(str);
    token=strtok(str," ");
    while(token!=NULL){
        s1[j]=(char *)malloc(sizeof(token)+1);
        strcpy(s1[j],token);
        j++;
        token=strtok(NULL," ");
    }
    for(int i=j-1;i>=0;i--){
    printf("%s\t",s1[i]);
    }

    return 0;
}


