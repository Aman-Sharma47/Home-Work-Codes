#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    a=a^b^c;
    b=a^b^c;
    c=a^b^c;
    a=a^b^c;
    printf("After Swapping: a = %d, b = %d ,c = %d", a, b, c);
    return 0;

}

