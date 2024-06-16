#include <stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char str[MAX];
    fgets(str,MAX,stdin);
    int len=strlen(str);
   
    for(int i=0;i<len;i++){
        if(str[i]==str[i+1])
        continue;
        else{
            if(str[i+1]==str[i+2])
            i++;
            else
            printf("%c",str[i+1]);
        }
    }
    return 0;
}


