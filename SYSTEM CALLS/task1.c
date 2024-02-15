#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void sigint_handler(int signum)
{
	printf("\nHey, Igot a SIGINT: %d\n\n" , signum);
	signal(SIGINT, SIG_IGN);
	signal(SIGINT, SIG_DFL);
}
void sigquit_handler(int signum)
{
	printf("\nHey, I got a SIGQUIT : %d\n\n",signum);
	signal(SIGQUIT, SIG_IGN);
	signal(SIGQUIT,SIG_DFL);
}
 void sigtstp_handler(int signum)
{
	printf("\nHey, I got a SIGSTP : %d\n\n",signum);
	signal(SIGTSTP, SIG_IGN);
	signal(SIGTSTP,SIG_DFL );
}
void sigkill_handler(int signum)
{
	printf("\nHEy, I got a SIGKILL : %d\n\n", signum);
	signal(SIGKILL, SIG_IGN);
	signal(SIGKILL, SIG_DFL);
}
void sigstop_handler(int signum);
{
	printf("\nHey , I got a SIGSTOP : %d\n\n", signum);
	signal(SIGSTOP,SIG_IGN);
	signal(SIGSTOP, SIG_DFL);
}
int main()
{
	signal(SIGINT, sigint_handler);
	signal(SIGQUIT, sigquit_handler);
	signal(SIGTSTP, sigtstp_handler);
	signal(SIGKILL, sigkill_handler);
	signal(SIGSTOP, sigstop_handler);
}


