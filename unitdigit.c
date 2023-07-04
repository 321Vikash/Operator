/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to print unit digit of a given number.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number :");
    scanf("%d", &a);
    b = a % 10;
    printf("Unit digit %d is :%d", a, b);
    return 0;
}