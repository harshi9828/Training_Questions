#include <stdio.h>

int main()
{
    int arr[100],n;
    
    printf("Enter the value for n:-");
    scanf("%d",&n);
    printf("Enter the elements of an array:-");
    for(int i=0;i<n;i++ )
    scanf("%d",&arr[i]);
    printf("%d\t",arr[n-1]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i])
            break;
            else if(arr[j]<arr[i] && j==n-1)
            printf("%d\t",arr[i]);
            
        }
    }

    return 0;
}

