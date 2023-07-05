/* Programmer :Vikash Kumar Thakur 
   Topic      :WAP to make the last digit of a number stored in a variable as zero.(Example if x=2345 then make it x=2340)
   IDE        :VS Code
   Date       :06 July 2023
*/
#include <stdio.h>
int main()
{
    int a, num = 2345;
    a = num / 10 * 10;
    printf("The last digit is :%d", a);
    return 0;
}