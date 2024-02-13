/*Write a C program to take an array of element of size n. print the sum of all the
elements of an array */

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    
    printf("Enter the size of the array:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    printf("The sum of all the elements in the array is: %d\n", sum);
    
    return 0;
}
