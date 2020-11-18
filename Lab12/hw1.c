#include <stdio.h>
#include <signal.h>

int alarmFlag = 1;

void myHandler()
{
	printf("My handler funcion is called\n");
	alarmFlag = 0;
}

void main()
{

 	signal(SIGALRM, myHandler);
	alarm(3);
	printf("Loop start.\n");
	while( alarmFlag )
		sleep(1);
	
	printf("Loop ends due to my hander function.\n");

	signal(SIGALRM, SIG_DFL);
//	alarmFlag = 1;
	alarm(3);
	printf("LOOP START2(Alarm).\n");

	while(1);
	printf(" Maybe This line should never be executed");
}
