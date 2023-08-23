#include <stdio.h>
#include <stdint.h>

void swap(uint8_t *pnum1, uint8_t *pNum2)
{
    printf("%p\n", &pnum1);
    printf("%p\n", &pNum2);
    uint8_t temp;
    temp = *pnum1;
    *pnum1 = *pNum2;
    *pNum2 = temp;
}

int main(void)
{
    uint8_t num1, num2;
    num1 = 5;
    num2 = 7;
    printf("Before swapping: %d , %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: %d , %d\n", num1, num2);
    return 0;
}