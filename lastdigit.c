/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to print a given number without its last digit
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the integer: ");
    scanf("%d", &a);
    b = a / 10;
    printf("Last digit %d is :%d", a, b);
    return 0;
}