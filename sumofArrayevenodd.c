#include <stdio.h>
int main()
{
    int even = 0, odd = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("sum of even %d and odd %d", even, odd);
    return 0;
}