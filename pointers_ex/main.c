#include <stdio.h>

int main(void)
{
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num1 = %d, num2 = %d\n", num1, num2); // 5, 7

    ptrA = &num1;
    ptrB = &num2;

    printf("num1 = %d, num2 = %d\n", num1, num2); // 5, 7

    // change the values
    *ptrA = *ptrA + 1; // num1 = 6
    *ptrB = *ptrB + 3; // num2 = 10

    printf("num1 = %d, num2 = %d\n", num1, num2); // 6, 10

    // change the pointers
    ptrA = ptrB; // ptrA -> num2, ptrB -> num2
    ptrB = ptrA; // ptrB -> num2

    printf("num1 = %d, num2 = %d\n", num1, num2);   // 6, 10
    printf("ptrA = %d, ptrB = %d\n", *ptrA, *ptrB); // 10, 10

    // change the values
    num1 = *ptrB;    // num1 = 10
    num2 = num1 - 3; // num2 = 10 - 3 = 7

    printf("num1 = %d, num2 = %d\n", num1, num2); // 10, 7

    return 0;
}