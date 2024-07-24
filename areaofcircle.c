#include <stdio.h>
int main()
{
    int n;
    float pi = 3.14;
    printf("Enter the radious :");
    scanf("%d", &n);
    printf("area is %0.1f", pi * n * n);
    return 0;
}