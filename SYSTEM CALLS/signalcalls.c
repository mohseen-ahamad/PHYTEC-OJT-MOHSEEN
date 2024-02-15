#include<stdio.h>
#include<stdlib.h>

void myhandler(int signum)
{
	printf("hey , I got a signal : %d\n" , signum);
	for (int i = 1 ; i<=10; i++)
	{
		printf("i am masking SIGNINT for 10 seconds! \n");
		sleep(1);
	}
	printf("DOne witi handler function and falling bck to main () after 2 secs\n\n");
	sleep(2);
	signal(SIGINT, SIG_DFL);
}
int main()
{
	struct sigaction newact;
	newact.sa_handler = my handler;
	newact.sa_flags = 0;
	sigemptyset(&newact.sa_mask);
	//sigfillset(&newact.sa_mask);
	sigaction(SIGINT, &newact, NULL);
	 
	while(1)
	{
		printf("I am main() in an infinte loop !\n");
		sleep(1);
	}
	return 0 ;
}


		
