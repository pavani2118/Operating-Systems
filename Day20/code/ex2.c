#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/mman.h>
#include<sys/wait.h>

int main(){
	size_t size = 4096;
	char *shared_mem = mmap(NULL, size, PROT_READ |PROT_WRITE , MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	if(shared_mem == MAP_FAILED){
		perror("mmap faild");
		exit(1);
	}
	
	int n,r;
	scanf("Enter value for n: ", &n);
	scanf("Enter value for r: ", &r);
	
	pid_t pid = fork();
	if(pid == 0){
		//child process
		sleep(1);
		sprintf(shared_mem,"%d", n);
		sprintf(shared_mem,"%d", r);
		printf("Child receives: %d\n", shared_mem);
		exit(0);
	}
	else if(pid>0){
		//parent process
		wait(NULL);//wait for child to finish
		printf("Parent read: %d\n", shared_mem);
		munmap(shared_mem, size);
	}
	else{
		perror("fork failed");
		exit(1);
	}
	
	return 0;
}