/* writes a program that reads two numbers 
and prints their product
*/
#include <stdio.h>
int main (void)
{int number1;
int number2;
int result;
// declarations
scanf ("%d, &number1");
scanf ("%d, &number2");
result = number1 *number2;
printf("answer %d\n\n", result);
return 0;
}