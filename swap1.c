/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to swap value of two int variables without using third variable.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the values for A and B: ");
    scanf("%d%d", &a, &b);
    // swapping logic here
    b = a + b; /*temporarily storing the sum*/
    a = b - a; /*updating first no with difference */
    b = b - a;
    printf("\nAfter swapping:\nA=%d\nB=%d", a, b);
    return 0;
}