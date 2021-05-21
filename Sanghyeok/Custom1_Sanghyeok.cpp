#include <stdio.h>

double Divide(double dividend, double divisor)
{
	double result = 0;
	result = dividend / divisor;
	return result;
}

int main(void)
{
	double a = 0, b = 0;
	printf("Input dividend, divisor: ");
	scanf_s("%lf %lf", &a, &b);
	if (b == 0)
	{
		printf("Error: divisor is 0\n");
		printf("Divide(dividend, divisor) = %f", b);
	}
	else
	{
		printf("Divide(dividend, divisor) = %f", Divide(a, b));
	}
}