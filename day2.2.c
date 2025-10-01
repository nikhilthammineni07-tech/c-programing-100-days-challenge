#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area of the circle = %d\n", area);
    printf("Circumference of the circle = %d\n", circumference);

    return 0;
}
