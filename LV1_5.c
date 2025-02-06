#include<stdio.h>
int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result=num%8;
    printf("Result:%d",result);
}