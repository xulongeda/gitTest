#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	printf("hello world\n");
	float a = 12.34;
	float b = 23.456;
	if (fabs(a-b) < 1e-6)
		printf("a == b\n");
	else
		printf("a != b\n");
	return 0;
}
