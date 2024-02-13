// Write a C program to add two number by using functions

#include<stdio.h>
int addNumbers(int a,int b){
    return a+b;
}

int main(){
    int num1, num2, sum ;

    printf("Enter the First Nummber:");
    scanf("%d",&num1);

    printf("Enter the Second Number:");
    scanf("%d",&num2);

    sum=addNumbers(num1,num2);

    printf("The addition of two numbers is %d",sum); 

    return 0;   
}
