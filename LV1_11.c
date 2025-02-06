#include <stdio.h>
int main() {
    int num, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    sum = (num % 10) + ((num / 10) % 10) + (num / 100);
    printf("Sum of digits: %d\n", sum);
}
