#include <stdio.h>

int main()
{
    int arr[100],n,sum=0,total=0;
    
    printf("Enter the value for n:-");
    scanf("%d",&n);
    printf("Enter the elements in an array:-");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        total+=arr[i];
    }
    int result=(sum-total);
    printf("%d",result);
    

    return 0;
}


