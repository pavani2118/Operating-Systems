
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int A,B,C;
int main() {
    pid_t pidA = getpid(); 

    printf("\nI'm A\n");
    printf("My pid: %d\n", pidA);
	printf("Enter A: ");
			scanf("%d", &A);
			printf("Enter B: ");
			scanf("%d", &B);
			printf("Enter C: ");
			scanf("%d", &C);

    pid_t f = fork();
    if (f == 0) {

        sleep(1); 
        printf("\nI'm B\n");
        printf("My ppid: %d\n", getppid());
        printf("My pid: %d\n", getpid());
		
		//factorial of A
		int fac = 1;
	
		for(int i=1; i<=A; i++){
			fac*=i;
		}
		printf("Factorial of %d is: %d\n",A,fac);
        return 0;
    }

    pid_t k = fork();
    if (k == 0) {
        
        sleep(2); 
        printf("\nI'm C\n");
        printf("My ppid: %d\n", getppid());
        printf("My pid: %d\n", getpid());
		
		//fibbonacci of C
			int x=0;
			int y=1;
	
			for(int i=1; i<=C; i++){
				printf("%d ",x);
				int z = x+y;
				x = y;
				y = z;
			}
			printf("\n");
			
			//check C is prime
			
			int isPrime;
			
			if (C <= 1) {
				isPrime = 0;  
			} else {
				for (int i = 2; i * i <= C; i++) {
					if (C % i == 0) {
						isPrime = 0;
						break;
					}
				}
			}

			if (isPrime)
				printf("%d is a prime number.\n", C);
			else
				printf("%d is not a prime number.\n", C);
			
			
        return 0;
    }

    
    wait(NULL);
    wait(NULL);

    return 0;
}