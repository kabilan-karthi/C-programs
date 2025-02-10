#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
