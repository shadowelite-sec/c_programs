#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, D, R1, R2, R, I;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    // condition for real and different roots
    if (D > 0) {
        R1 = (-b + sqrt(D)) / (2 * a);
        R2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf\n", R1, R2);
    }

    // condition for real and equal roots
    else if (D == 0) {
        R1 = R2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n", R1);
    }

    // if roots are not real
    else {
        R = -b / (2 * a);
        I = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", R, I, R, I);
    }

    return 0;
} 

