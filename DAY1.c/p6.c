#include <stdio.h>

int main() {
    float length, width;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);

    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}