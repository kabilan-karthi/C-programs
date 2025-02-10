#include <stdio.h>
int main() {
    int arr[] = {12, 3, 4, 5, 6, 7, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
}
