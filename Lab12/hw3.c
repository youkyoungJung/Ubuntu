#include <stdio.h>

void main()
{
	printf("Before the first system()\n");
	system("echo the first system function");
	printf("After the first system()\n");

	printf("Before the second system()\n");
	system("sleep 100&");
	printf("After the second system()\n");
	system("ps -ef| grep sleep");
	sleep(10);
	printf("Program end : youkyoung Jung\n");
}
