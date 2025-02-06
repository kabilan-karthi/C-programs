#include <stdio.h>
int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("One's digit: %d\n", num % 10);
}
