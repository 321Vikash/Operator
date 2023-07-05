/* Programmer :Vikash Kumar Thakur 
   Topic      :WAP to input a any number display the sum of the digits.
   IDE        :VS Code
   Date       :06 July 2023
*/
#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter the any number :");
    scanf("%d", &a);
    while (a != 0)
    {
        int rem = a % 10;
        sum += rem;
        a /= 10;
    }
    printf("\nThe Sum is %d", sum);
    return 0;
}