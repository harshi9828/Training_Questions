#include <stdio.h>
#include<string.h>

#define MAX 100

int main()
{
    char str[MAX];
    
    printf("Enter the string\n");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    
    for(int i=0;i<len;i++){
        if(i==0 && (str[i]>='a' && str[i]<='z'))
        str[i]=str[i]-32;
       
        if(str[i]==' ')
        {
            if(str[i+1]>='a'&& str[i+1]<='z')
            str[i+1]=str[i+1]-32;
        }
        
        
    }
    printf("%s",str);
    
}

