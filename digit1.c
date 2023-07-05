/* Programmer :Vikash Kumar Thakur 
   Topic      :WAP to input a number and input a digit.Append a digit in the number and print the resulting number.(Exmpale- number=234 and digit=9 then the resulting number is 2349).
   IDE        :VS Code
   Date       :06 July 2023
*/
#include <stdio.h>
int main()
{
    int n, x, digit;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Enter a digit :");
    scanf("%d", &digit);
    x = n * 10 + digit;
    printf("The resulting number is :%d", x);
    return 0;
}