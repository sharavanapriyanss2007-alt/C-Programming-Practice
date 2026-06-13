#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {

    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", add(a, b));
    printf("Subtraction = %.2f\n", subtract(a, b));
    printf("Multiplication = %.2f\n", multiply(a, b));
    printf("Division = %.2f\n", divide(a, b));

    return 0;
}
