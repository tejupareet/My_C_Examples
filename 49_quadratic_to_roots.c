#include <stdio.h>
#include <math.h>

void find_roots(float a, float b, float c) {
    float delta, root1, root2;

    // Calculate discriminant
    delta = b * b - 4 * a * c;

    // Check if roots are real or complex
    if (delta > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (delta == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-delta) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}

int main() {
    float a, b, c;

    // Input coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Call the function to find roots
    find_roots(a, b, c);

    return 0;
}
