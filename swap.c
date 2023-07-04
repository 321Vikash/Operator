/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to swap value of two int variable.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two number :");
    scanf("%d %d", &a, &b);
    // swapping using third varible
    a = c;
    a = b;
    b = c;
    printf("\nAfter swapping values are: %d and %d", a,b);
    return 0;
}