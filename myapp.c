#include "func1.h"
#include "func2.h"
#include <stdio.h>

void preprocess()
{
	printf("thhththth");
}

void postprocess()
{
	printf("eretererer");
}


int main(void)
{
	preprocess();

	func1();
	func2();

	postprocess();

	return 0;
}

