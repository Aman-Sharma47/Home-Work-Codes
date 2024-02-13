// Write a C program to convert uppercase to lowercase by using bitwise operator

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    
    // Convert uppercase to lowercase using bitwise operator
    ch = ch | 32;
    
    printf("The lowercase letter is: %c\n", ch);
    
    return 0;
}