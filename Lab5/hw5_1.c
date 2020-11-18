#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: command number\n");
		exit(1);
	}
	printf("%s %.2f \n", argv[0], sqrt(atoi(argv[1])));
	return 0;
}
