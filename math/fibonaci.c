#include <stdio.h>

int check(int N) {
    int a = 0, b = 1, temp;

    while (b < N) {
        temp = b;
        b = a + b;
        a = temp;
    }

    return a;
}

int main() {
    int N;

    scanf("%d", &N);

    int result = check(N);

    printf("%d\n", result);

    return 0;
}
