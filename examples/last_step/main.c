#include <stdio.h>
#include "addition.h"
#include "subtraction.h"

int main()
{
    int num1 = 10, num2 = 5;

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));

}
