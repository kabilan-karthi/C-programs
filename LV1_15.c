#include <stdio.h>
int main() {
    int num, first_two, third, fourth, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    first_two = num / 100;          
    third = (num / 10) % 10;        
    fourth = num % 10;            
    result = (first_two * 100) + (fourth * 10) + third;
    printf("Result: %d\n", result);
}
