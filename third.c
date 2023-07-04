/* Programmer :Vikash Kumar Thakur
   Topic      :WAP with one char type variable.Assign 'A' in the variable.Now change the variable from 'A' and 'B' using increment operator.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    char x = 'A';
    x++;
    printf("%c", x); // prints "B"
    return 0;
}