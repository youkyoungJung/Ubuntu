#include <stdio.h>
#include <unistd.h>

void main()
{
	int fd[2], fork_return;
	char buf[32];
	
	pipe(fd);
	fork_return = fork();
	
	if( fork_return == 0 )
	{
		write(fd[1], "Are you YooKyoung?", 32);
	}
	else
	{
		read(fd[0], buf, 32);
		printf("Received message from child: %s \n", buf);
		wait(NULL);
	}
	printf("The process with PID = %d terminates. \n", getpid());

}
