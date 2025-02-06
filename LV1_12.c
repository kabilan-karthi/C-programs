#include <stdio.h>
int main() {
    int num, reverse;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    reverse = (num % 10) * 10 + (num / 10);
    printf("Reversed number: %d\n", reverse);
}
