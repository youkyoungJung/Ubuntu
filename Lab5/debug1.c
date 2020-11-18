#include<stdio.h>

void skip(){
	printf("skip function is called\n");
}

int sum(int i){
	if(i == 1)
		return 1; 

	return i + sum(i-1);
}
main(){
	printf("Start\n");
	skip();
	printf("%d\n", sum(10));
}

