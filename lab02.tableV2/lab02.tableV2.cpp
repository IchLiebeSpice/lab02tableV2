// lab02.tableV2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) <= -3.0
#define FUNC1(x) 2 - fabs(x)
#define COND2(x) (x) > -3.0 && (x) <= 3.0
#define FUNC2(x) (x)*sin(3*(x))
#define FUNC3(x) 2.0 * pow(x, 4) + (x) - 3.0
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x)) 
int main()
{  
	double a = -3.0, b = 3.0, x, h = 0.1;
	printf("x:\t");  
	for (x = a; x <= b; x += h)
	{
		printf("%9.2f%c", x, PUT_DELIM(x, h, b));
	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%9.3f%c", FUNC(x), PUT_DELIM(x, h, b));  
	}  
	getchar();
	return 0;
}
  
  