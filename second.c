/* Programmer :Vikash Kumar Thakur
   Topic      : WAP to calculate size of real constant.
   Language   :C
   Date       :04/07/2023
*/
#include <stdio.h>
int main()
{
    int a;
    a = sizeof(2.5); // by default take double
    printf("The size of :%d", a);
    return 0;
}