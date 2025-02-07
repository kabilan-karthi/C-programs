#include <stdio.h>
int main() {
    int num, first_two, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first_two = num / 10;      
    result = (first_two * 10) + 2; 
    printf("Result: %d\n", result);
}
