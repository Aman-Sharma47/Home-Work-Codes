#include<stdio.h>
int main()
{
      int i=1,c;
      printf("The numbers from 1 to 100 which are not divisible\nby 2, 3 & 5 are:\n\n");
      for(i=1;i<=100;i++)
      {
            /*Condition to check numbers not divisible by 2, 3 and 5.*/
            if((i%2!=0)&&(i%3!=0)&&(i%5!=0))
            {
                  printf("%d  ",i);
                  c++;
            }
      }
      printf("\n\n Total Count = %d",c);
      return 0;
}