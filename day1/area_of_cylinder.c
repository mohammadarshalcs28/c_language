#include <stdio.h>

int main()
{
    float radious;
    float height;
    printf("enter the radious of circle:");
    scanf("%f", &radious);
    printf("enter the height of circle:");
    scanf("%f", &height);
    float volume = 3.14 * radious * radious * height;
    printf("the volume of cylinder= %f", volume);
    return 0;
}
