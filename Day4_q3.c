#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50

int main()
{
    char str[MAX],*s1[MAX];
    int j=0;
    scanf("%s",str);
    char* token;
    token=strtok(str,"|");
    while(token!=NULL){
        s1[j]=(char*)malloc(strlen(token)+1);
        strcpy(s1[j],token);
        j++;
        token=strtok(NULL,"|");
    }
    for(int i=0;i<j;i++){
        for(int k=i+1;k<j;k++){
            if(strcmp(s1[k],s1[i])<0){
                char* temp;
               temp=(char*)malloc(1024);
          strcpy(temp,s1[i]);
          strcpy(s1[i],s1[k]);
          strcpy(s1[k],temp);
            }
        }
    }
    for(int i=0;i<j;i++)
    {
        printf(" %s|",s1[i]);
        
    }
    return 0;
}
