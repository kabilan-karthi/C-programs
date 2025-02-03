#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<12){
        printf("You are a child and get a 50%% discount.");
    }
    else if(age<12 && age>18){
        printf("You are a teenager.");
    }
    else if(age==18){
        printf("You are an adult and get 20%% discount.");
    }
    else if(age>60){
        printf("You are a senior and get 30%% discount.");
    }
    else{
        printf("No discount");
    }
}