#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("Usage: command parameter\n");
		exit(1);
	}
	printf("num: %d\n",argc);
	printf("%s \n", argv[1]);
	return 0;
}
