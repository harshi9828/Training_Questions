#include <stdio.h>
#include<string.h>


void maxOperations(char s[]){
    
    int n= strlen(s);
    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]+1){
            i++;
        }
    }
    printf("%s",s);
    
    
}

int main()
{
    char s[1000005];
    scanf("%s",s);
    maxOperations(s);
   

    return 0;
}
