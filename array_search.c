//Linear Search
#include<stdio.h>
int main() {
    int arr[10] = {12, 3, 4, 5, 6, 7, 8, 9}; 
    int target = 4;
    for(int i = 0; i < 10; i++) { 
        if(arr[i] == target) {
            printf("Element found at index: %d\n", i);
            return 0; 
        }
    }
    printf("Element not found\n");
    return -1; 
}
//Binary Search
#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return -1;
}
int main() {
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 12}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 4;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
}

