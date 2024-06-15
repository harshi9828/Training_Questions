#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size,i,j,k;

    printf("Enter the size of the array");
    scanf("%d",&size);
    
    printf("Enter the elements of the array");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1]; }
                
                size--;
                j--;
            }
        }
    }
    printf("After deleting the elements\n");
    for(i=0;i<size;i++)
    printf("%d\t",arr[i]);
    

    return 0;
}


