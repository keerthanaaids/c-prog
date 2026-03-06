#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the three numbers separated by spaces : ");
    scanf("%f %f %f", &a, &b, &c);
    float multiple = a * b * c;
    printf("Multiplication : %.2f", multiple);
    return 0;
}