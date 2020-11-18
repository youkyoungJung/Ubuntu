#include<stdio.h>
#include "my.h"

extern int two_time(int input);
extern int four_time(int input);

int main(void)
{
	int a;
	printf("Start !!\n");
	a = (int)My_input;

	a = two_time(a);
	printf("Two Time: %d\n", a);
	a = four_time(a);
	printf("Four Time: %d\n", a);

	return 0;
}
