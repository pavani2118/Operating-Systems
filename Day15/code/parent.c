#include<stdio.h>
#include<unistd.h>
int main(){
	int f = fork();
	if(f==0){
		printf("I'm the child!\n");
	}
	else{
		printf("I'm the parent!\n");
	}
	return 0;
}