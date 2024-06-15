#include <stdio.h>

// Function to rotate array to the right by k steps
void rotate(int arr[], int n, int k) {
    // Create a temporary array of size n
    int temp[n];

    // Copy elements from original array to temp array
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // Rotate elements to the right by k steps
    for (int i = 0; i < n; i++) {
        arr[(i + k) % n] = temp[i];
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the rotation
int main() {
    int arr[100] ;
    int n,k;
    printf("Enter the number of elements:-");
    scanf("%d",&n);
    printf("\nEnter the elements:-");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nEnter the number of steps to rotate:-");
    scanf("%d",&k);
    

    printf("Original array: ");
    printArray(arr, n);

    rotate(arr, n, k);

    printf("Rotated array by %d steps to the right: ", k);
    printArray(arr, n);

    return 0;
}

