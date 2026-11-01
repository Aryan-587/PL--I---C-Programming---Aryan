/* Program (30) -> Write a program to calculate the area of a triangle.

Solution (2): Arguments, No Return Value
*/
#include <stdio.h>
void areaTriangle(float base, float height) {
    float area;
    area = 0.5 * base * height;
    printf("\nArea of Triangle = %f\n", area);
}
int main() {
    float b, h;
    printf("\nEnter base: ");
    scanf("%f", &b);
    printf("Enter height: ");
    scanf("%f", &h);
    areaTriangle(b, h);
    return 0;
}