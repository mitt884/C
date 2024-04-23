#include <stdio.h>
#include <math.h>

int convert(int n) {
    int decimal = 0;
    int base = 1;

    while (n > 0) {
        int digit = n % 10;
        decimal += digit * base;
        n /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int N;

    scanf("%d", &N);

    int decimal = convert(N);

    printf("%d\n", decimal);

    return 0;
}
