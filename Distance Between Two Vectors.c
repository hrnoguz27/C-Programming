#include <stdio.h>
#include <math.h>

float distance(float x1, float x2, float y1, float y2);
int main(void)
{
    float result, a, b, c, d;
    printf("\nEnter The Coordinates of Point A:\n");
    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &a);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &b);    
    printf("\nEnter The Coordinates of Point B:\n");
    printf("\nX - Axis Coordinate:\t");
    scanf("%f", &c);
    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &d);
    result = distance(a, b, c, d);
    printf("\nDistance between Points A and B: %f\n", result);
    return 0;
}
float distance(float x1,float x2,float y1,float y2)
{
    float distance;
    distance = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
    return distance;
}
