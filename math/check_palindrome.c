#include <stdio.h>

int check(int n) {
    int rev = 0;
    int org = n;

    while (org > 0) {
        rev = rev * 10 + org % 10;
        org /= 10;
    }

    return rev == n;
}

int main() {
    int N;

    scanf("%d", &N);

    if (check(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
