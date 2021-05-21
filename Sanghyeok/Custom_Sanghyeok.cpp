#include <stdio.h>
#include <math.h>

double Divide(double dividend, double divisor)
{
	double result = 0;
	result = dividend / divisor;
	return result;
}
int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return(Fibonacci(n - 1) + Fibonacci(n - 2));
}
int Factorial(int n)
{
	int i = 0, result = 1;
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	return result;
}
int Sum(int n)
{
	int i = 0, result = 0;
	for (i = 1; i <= n; i++)
	{
		result = result + i;
	}
	return result;
}
int Sum_Range(int from, int to)
{
	int i = 0, result = 0;
	for (i = from; i <= to; i++)
	{
		result = result + i;
	}
	return result;
}
double Distance(int x1, int x2, int y1, int y2)
{
	double re1 = 0 , re2 = 0, result = 0;
	int a = 0, b = 0;
	a = x2 - x1;
	b = y2 - y1;
	re1 = pow(a, 2);
	re2 = pow(b, 2);
	result = sqrt(re1 + re2);
	return result;
}
int isRightAngleTriangle(int a, int b, int c)
{
	int ch = 0, beta = 0, alpha = 0, result = 0;
	alpha = pow(a, 2);
	beta = pow(b, 2);
	ch = pow(c, 2);
	result = alpha + beta;
	if (result == ch)
		printf("%d %d %d is Right Angle Triangle", a, b, c);
	else
		printf("%d %d %d is not Right Angle Triangle", a, b, c);
}
int main(void)
{
	double a = 0, b = 0;

	printf("===== (1) divide =====\n");
	printf("Input dividend, divisor: ");
	scanf_s("%lf %lf", &a, &b);
	if (b == 0)
	{
		printf("Error: divisor is 0\n");
		printf("Divide(dividend, divisor) = %f", b);
	}
	else
	{
		printf("Divide(dividend, divisor) = %f\n", Divide(a, b));
	}
	int j = 0;
	printf("===== (2) Fibonacci =====\n");
	printf("Input n: ");
	scanf_s("%d", &j);
	printf("Fibonacci(n): %d\n", Fibonacci(j));
	printf("===== (3) Factorial =====\n");
	printf("Input n: ");
	scanf_s("%d", &j);
	printf("Factorial(n) = %d\n", Factorial(j));
	printf("===== (4) Sum(n) =====\n");
	printf("Input n: ");
	scanf_s("%d", &j);
	printf("Sum(n) = %d\n", Sum(j));
	int c = 0;
	printf("===== (5) Sum_Range(from, to) =====\n");
	printf("Input from, to: ");
	scanf_s("%d %d", &j, &c);
	printf("Sum_Range(from, to) = %d\n", Sum_Range(j, c));
	printf("===== (6) Distance(x1, x2, y1, y2) =====\n");
	printf("Input x1, x2, y1, y2: ");
	int f = 0, d = 0;
	scanf_s("%d %d %d %d", &d, &f, &j, &c);
	printf("Distance(x1, x2, y1, y2) = %f\n", Distance(d, f, j, c));
	printf("===== (7) Right Angle Triangle =====\n");
	printf("Input a, b, c: ");
	scanf_s("%d %d %d", &c, &d, &f);
	isRightAngleTriangle(c, d, f);
}