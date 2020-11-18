#include <stdio.h>
int main(){
	int i, j;
	j = 0;

	printf("Ready to fork...\n");
	i = fork();
	if(i == 0)
	{
	//	i = wait();
		printf("The child executes this code.\n");
		for(i=0; i<5; i++)
		j = j + 1;
		printf("child j=%d\n" ,j);
	}
	else
	{
		j=wait();
		printf("The parent execures this code.\n");
		printf("parent j = %d\n", j);
	}
}
