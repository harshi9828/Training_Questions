#include <stdio.h>

int main()
{
    int arr[100],arr1[100],m,n;
    printf("Enter the size of the first array:-\n");
    scanf("%d",&m);
    printf("Enter the elements of the first array:-\n");
    for(int i=0;i<m;i++)
    scanf("%d",&arr[i]);
    printf("Enter the size of the second array:-\n");
    scanf("%d",&n);
    printf("Enter the elements of the second array:-\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    printf("The common elements of the both array:-\n");
    if(m>n)
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j])
            printf("%d",arr[i]);
        }
    }
    else
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr1[j])
            printf("%d\t",arr[i]);
        }
    }
    

    return 0;
}


