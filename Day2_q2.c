#include <stdio.h>
#include <math.h>

int main()
{
    int n,max=0,max1=0;
    printf("Enter the value:-");
    scanf("%d",&n);
    
    for(int i=0;i<n/2;i++){
        if(pow(i,2)<n && n<pow(i+1,2)){
            max=n-(i*i);
            max1=pow(i+1,2)-n;
           if(max>max1)
           printf("%d",(i+1)*(i+1));
           else
           printf("%d",i*i);
        }
    }
        
        
    
   
    return 0;
}


