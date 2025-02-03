#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==0){
        printf("The number is zero.");
    }
    if(num>0){
        printf("It is a positive number.");
        if(num%2==0){
            printf("\nThe number is even.");
        }
        else{
            printf("\nThe number is odd.");
        }
    }
    if(num<0){
        printf("It is a negative number.");
        if(num%5==0){
            printf("\nIt is divisible by 5.");
        }
        else{
            printf("\nIt is not divisible by 5.");
        }
    }
}