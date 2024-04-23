#include <stdio.h>
#include <math.h>

double fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        double fact = 1.0;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}

double sum(double x, double eps) {
    double S = 1.0;
    double term = 1.0;
    int sign = -1;
    int i = 2;
    double error = 1.0;

    while (error >= eps) {
        term = pow(x, i) / fact(i);
        S += sign * term;
        sign *= -1;
        i += 2;
        error = fabs(term);
    }

    return S;
}

int main() {
    double x;
    int n;
    double eps;


    scanf("%lf", &x);
    scanf("%d", &n);
    eps = pow(10, -n);

    double S = sum(x, eps);

    printf("%.2lf\n", S);
    return 0;
}
