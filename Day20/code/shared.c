#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>

#define SHM_SIZE 1024 //size of shared memory segment

int main(){
	key_t key = ftok("shmfile",1039); //generate unique key
	int shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666); //create shared memory segment
	if(shmid == -1){
		perror("shmget");
		exit(1);
	}
	
	char *shmaddr = (char*) shmat(shmid, NULL, 0); //attach to shared memory
	if(shmaddr == (char*) -1){
		perror("shmat");
		exit(1);
	}
	
	printf("Write Data: ");
	fgets(shmaddr, SHM_SIZE, stdin); //write data to shared memory
	
	printf("Data written in memory: %s\n",shmaddr);
	
	shmdt(shmaddr); //detach from shared memory
	
	return 0;
}