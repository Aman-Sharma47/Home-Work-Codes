#include <stdio.h> 
int main() 
{
    int sum = 0;
    int square =0;

    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
        square=square + i*i;
    }
printf("the sum of first five numbers are: %d \n",sum);
printf("the sum of squares of first five numbers are: %d \n",square);
return 0;
}
