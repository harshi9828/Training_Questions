#include <stdio.h>
#include <string.h>

int main()
{
    char f[20],s[20],temp;
    printf("Enter the first string:-");
    scanf("%s",f);
    printf("Enter the second string:-");
    scanf("%s",s);
    int len1=strlen(f);
    int len2=strlen(s);
    if(len1!=len2)
    printf("The two strings are not an anagram.");
    else
    {
        
        for(int i=0;i<len1-1;i++)
        {
            for(int j=i+1;j<len1;j++){
                if(f[i]>f[j]){
                    temp=f[i];
                    f[i]=f[j];
                    f[j]=temp;
                }
            }
        }
        for(int i=0;i<len2-1;i++)
        {
            for(int j=i+1;j<len2;j++){
                if(s[i]>s[j]){
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
    }
  
    
    if(strcmp(s,f)==0)
    printf("Anagram");
    else
    printf("Not an Anagarm");
    
    

    return 0;
}


