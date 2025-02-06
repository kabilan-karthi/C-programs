#include <stdio.h>
int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("Ten's digit: %d\n", (num / 10) % 10);
}
