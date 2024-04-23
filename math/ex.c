#include <stdio.h>
#include <math.h>

double mu(int n) {
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

double tinh(double x, double epsilon) {
    double term = 1.0;
    double sum = 1.0;
    int n = 1;

    while (fabs(term) >= epsilon) {
        term = pow(x, n) / mu(n);
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    double x;
    int n;
    double eps;

    scanf("%lf", &x);
    scanf("%d", &n);
    eps = pow(10, -n);

    double result = tinh(x, eps);

    printf("%.2lf\n", result);

    return 0;
}
