#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x = 9.0, y = 2.0;

    printf("=== BASIC ARITHMETIC ===\n");
    printf("fabs(-5.5) = %.2f\n", fabs(-5.5));
    printf("fmod(9, 2) = %.2f\n", fmod(x, y));

    printf("\n=== POWER & ROOT ===\n");
    printf("pow(2, 3) = %.2f\n", pow(2, 3));
    printf("sqrt(9) = %.2f\n", sqrt(x));
    printf("cbrt(27) = %.2f\n", cbrt(27));

    printf("\n=== EXPONENTIAL & LOGARITHMIC ===\n");
    printf("exp(1) = %.2f\n", exp(1));
    printf("log(10) = %.2f\n", log(10));
    printf("log10(100) = %.2f\n", log10(100));
    printf("log2(8) = %.2f\n", log2(8));

    printf("\n=== TRIGONOMETRIC ===\n");
    double angle = M_PI / 4; // 45 degrees
    printf("sin(45°) = %.2f\n", sin(angle));
    printf("cos(45°) = %.2f\n", cos(angle));
    printf("tan(45°) = %.2f\n", tan(angle));

    printf("\n=== INVERSE TRIGONOMETRIC ===\n");
    printf("asin(0.707) = %.2f rad\n", asin(0.707));
    printf("acos(0.707) = %.2f rad\n", acos(0.707));
    printf("atan(1) = %.2f rad\n", atan(1));
    printf("atan2(1, 1) = %.2f rad\n", atan2(1, 1));

    printf("\n=== HYPERBOLIC ===\n");
    printf("sinh(1) = %.2f\n", sinh(1));
    printf("cosh(1) = %.2f\n", cosh(1));
    printf("tanh(1) = %.2f\n", tanh(1));

    printf("\n=== ROUNDING ===\n");
    printf("ceil(3.4) = %.2f\n", ceil(3.4));
    printf("floor(3.8) = %.2f\n", floor(3.8));
    printf("round(3.6) = %.2f\n", round(3.6));
    printf("trunc(3.9) = %.2f\n", trunc(3.9));

    printf("\n=== COMPARISON & OTHER ===\n");
    printf("fmax(4, 8) = %.2f\n", fmax(4, 8));
    printf("fmin(4, 8) = %.2f\n", fmin(4, 8));
    printf("fdim(10, 6) = %.2f\n", fdim(10, 6));
    printf("hypot(3, 4) = %.2f\n", hypot(3, 4));
    printf("copysign(5, -2) = %.2f\n", copysign(5, -2));

    printf("\n=== ANGLE CONVERSION ===\n");
    double deg = 180.0;
    double rad = deg * (M_PI / 180.0);
    printf("180 degrees = %.2f radians\n", rad);
    printf("PI radians = %.2f degrees\n", M_PI * (180.0 / M_PI));

    return 0;
}
