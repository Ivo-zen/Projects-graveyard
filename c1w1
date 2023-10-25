#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double next(int iteration)
{
	if (iteration == 6)
	{
		return 0;
	}

	double left = 1;

	if (iteration > 1)
	{
		double n = iteration - 1;
		double t = (1 / ((3 + 2 * (iteration - 2)) * pow(3, n)));
		left = pow(-1, n) * t;
	}

	return left + next(iteration + 1);
}

int main(void)
{
	double pi = sqrt(12) * next(1);

	printf("pi: %f", pi);

	return 0;
}
