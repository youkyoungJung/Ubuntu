#include <stdio.h>
int main(){
	alarm(3);
	printf (" Looping forever ..\n");

	while(1);

	printf("This line should never be executed \n");
}
