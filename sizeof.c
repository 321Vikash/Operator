/* Programmer :Vikash Kumar Thakur 
   Topic      :WAP to print size of an int, a float, a char and a double type variable
   IDE        :VS Code
   Date       :06 July 2023
*/
#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Size of integer :%d\n", sizeof(a));
    printf("Size of float :%d\n", sizeof(b));
    printf("Size of char :%d\n", sizeof(c));
    printf("Size of Double :%d\n", sizeof(d));
    return 0;
}