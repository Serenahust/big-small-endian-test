#include <stdio.h>
#include <stdbool.h>

union {
	int number;
	char s;
}test;

bool testBigEndin()
{
	test.number = 0x01000002;
	return (test.s == 0x01);
} 

int main()
{
	if (testBigEndin())
		printf("big");
	else
		printf("small");
	return 0;
}
