#include <stdio.h>

#include "isOdd.h"
#include "isEven.h"

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    isOdd(number);
    isEven(number);

    return 0;
}