//Write a program to display even numbers from 0 to 14
#include<stdio.h>
int main()
{
    int i;
  printf("Even numbers from 0 to 14:\n");
  for (i = 0; i <= 14; i += 2) {
    printf("%d ", i);
  }
  return 0;
}