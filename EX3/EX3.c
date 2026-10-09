#include <stdio.h>
#include <math.h>

int main(void)
{
	const double BASE_RATIO = 2.0 / 3.0; // base = 2/3 of height

	double area, height, base;
	
	printf("Enter the area of the sail (square meters): ");
	scanf("%lf", &area);

	//area = 1/2 * base * height, and base = (2/3)* height
	//area = 1/2 * (2/3) * height^2 = height^2  / 3
	// so height = sqrt(3.0 * area);
	height = sqrt(3.0 * area);
	base = BASE_RATIO * height;

	printf("Height of the sail: %.2f meters\n", height);
	printf("Base of the sail: %.2f meters\n", base);

	return 0;
}
