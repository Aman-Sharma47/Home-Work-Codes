#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of students:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float avg = (a+b+c+d+e)/5;
    printf("%.2f", avg);
    return 0;
}