#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];
    printf("Enter the string:-\n");
    scanf("%s",str);
    int len= strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
            }
            
        }
    }
    printf("The final string is %s",str);
   
    return 0;
}


