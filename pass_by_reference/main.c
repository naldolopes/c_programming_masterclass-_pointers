#include <stdio.h>

void findMinMax(int *ptrNum1, int *ptrNum2, int *ptrMin, int *ptrMax)
{
    if (*ptrNum1 > *ptrNum2)
    {
        *ptrMax = *ptrNum1;
        *ptrMin = *ptrNum2;
    }
    else
    {
        *ptrMax = *ptrNum2;
        *ptrMin = *ptrNum1;
    }
}

int main(void)
{
    int a = 5, b = 20;
    int max, min;
    findMinMax(&a, &b, &min, &max);
    printf("a = %d, b = %d\n", a, b);
    printf("min value is %d\n", min);
    printf("max value is %d\n", max);
    return 0;
}