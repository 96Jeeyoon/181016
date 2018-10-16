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

void turbo_on()
{
	printf("turbo on\n");	
}

void turbo_off()
{
	printf("turbo off\n");
}

int main(void)
{
	preprocess();	

	turbo_on();
	turbo_off();

	func1();
	func2();

	postprocess();

	return 0;
}

