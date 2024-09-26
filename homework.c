#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	const float x = -15.246;
	const float y = 4.642 * pow(10, -2);
	const float z = 20.001 * pow(10, 2);
	float alpha;
	setlocale(LC_ALL, "RUS");
	alpha = log(pow(y, -pow(fabs(x), 0.5))) * (x - y / 2) + pow(sin(atan(z)), 2);
	printf("Результат: %.3f", alpha);
}