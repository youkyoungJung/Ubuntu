#include<stdio.h>

void main()
{
	int fork_return;
	printf("Parent process starts with PID = %d\n", getpid());
	fork_return=fork();
	printf("Duplication begins with PID=%d\n", getpid());

	if(fork_return != 0)
		printf("I'm the parent process with fork return=%d\n", fork_return);
	else printf("I'm the child process with fork_return=%d\n", fork_return);
	sleep(100);
	printf("The process with PID=%d terminates.\n", getpid());
}
