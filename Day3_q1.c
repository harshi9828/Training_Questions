#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array:-");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j])
            printf("%d\t",a[i]);
        }
    }
    

    return 0;
}


