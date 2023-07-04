/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to swap values of two int variable without using third variable  and arithmetic operation
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value for A and B: "); // Taking input from user
    scanf("%d%d", &a, &b);
    /*Using XOR bitwise operator*/
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping:\nA = %d\nB = %d", a, b); // Printing new variables after swapping
    return 0;
}