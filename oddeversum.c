//2. Write a program to add even and odd numbers from 1 to 10 store them and display 
//their result in two separate array
#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int even_sum = 0;
  int odd_sum = 0;

  for (int i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
      even_sum += arr[i];
    } else {
      odd_sum += arr[i];
    }
  }

  printf("The sum of even numbers is %d\n", even_sum);
  printf("The sum of odd numbers is %d\n", odd_sum);

  return 0;
}
