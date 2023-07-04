/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to swap value of two int variable without using third variable and without using +,- operator
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nAfter swapping:\na = %d\nb = %d", a, b);
    return 0;
}