#include <stdio.h>

int main() {
    int num, first, second, last_two, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    first = num / 1000;             
    second = (num / 100) % 10;      
    last_two = num % 100;           
    result = (second * 1000) + (first * 100) + last_two; 
    printf("Result: %d\n", result);
}
