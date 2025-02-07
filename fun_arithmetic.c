#include <stdio.h>
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int mod(int x, int y) { return x % y; }
float divi(int x, int y) { return (float)x / y; }
int main() {
    int a = 10, b = 20;
    printf("Add: %d\n", add(a, b));
    printf("Sub: %d\n", sub(a, b));
    printf("Mul: %d\n", mul(a, b));
    printf("Mod: %d\n", mod(a, b));
}
