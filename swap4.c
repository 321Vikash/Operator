/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to swap value of two int variable in single line arithmetic expession.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the values for A and B: "); // Taking input from user
    scanf("%d%d", &a, &b);
    a = a + b - (b = a);
    printf("\nAfter swapping:\nA = %d\nB = %d", a, b);
    return 0;
}