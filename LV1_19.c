#include <stdio.h>

int main() {
    int num, first, last, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first = num / 100;         
    last = num % 10;          
    result = (first * 100) + (0 * 10) + last; 
    printf("Result: %d\n", result);
}
