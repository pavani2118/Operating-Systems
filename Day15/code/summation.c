#include<stdio.h>
#include<unistd.h>
int main(){
	int f = fork();
	if(f==0){
		printf("I'm the child!\n");
		int csum;
		for(int i=1; i<=5; i++){
			printf("%d ", i);
			csum+=i;
		}
		printf("\nSummation of child process: %d\n",csum);
	}
	else{
		printf("I'm the parent!\n");
		int psum;
		for(int i=6; i<=10; i++){
			printf("%d ", i);
			psum+=i;
		}
		printf("\nSummation of parent process: %d\n",psum);
	}
	return 0;
}