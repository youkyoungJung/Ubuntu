#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern multiplication(int);
int main(int argc, char *argv[])
{
	if(argc <2 )
	{
		printf("Illegal Syntax \n");
		printf("Usage: ./ex2 [2|3|...|9]\n");
		exit(1);
	}
	printf("para:%d %s %d %s \n", argc, argv[0],atoi( argv[1]),argv[2]);
	multiplication(atoi(argv[1]));
	return 0;
}
