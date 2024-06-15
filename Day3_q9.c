#include <stdio.h>
#include<string.h>

int main()

{
    char name[50],temp;
    printf("Enter the string:-");
    scanf("%s",name);
    int len=strlen(name);
    
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(name[i]>name[j]){
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    printf("Array of string in lexicographic order %s",name);

    return 0;
}


