#include <stdio.h>

int main() {
    int num, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    printf("Reversed number: %d\n", reverse);
}
