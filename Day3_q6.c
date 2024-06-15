#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],temp[100],c;
    scanf("%[^\n]s",ch);
    strcpy(temp,ch);
    int len=strlen(ch);
    
    for(int i=0,j=len-1;i<len,j>=0;i++,j--){
        c=ch[i];
        ch[i]=ch[j];
        ch[j]=c;
    }
    int ans= strcmp(temp,ch);
   
    if(ans==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    
    return 0;
}



