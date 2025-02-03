#include<stdio.h>
int main(){
    int mark;
    printf("Enter your marks: ");
    scanf("%d", &mark);
    if (mark==90||mark>90){
        printf("Grade A");
    }
    else if(mark==80||mark>80){
        printf("Grade B");
    }
    else if(mark==70||mark>70){
        printf("Grade C");
    }
    else if(mark==60||mark>60){
        printf("Grade D");
    }
    else if(mark==50||mark>50){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }


}