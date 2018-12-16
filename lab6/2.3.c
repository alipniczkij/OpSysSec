#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int i;
	int ppid = getpid();
	for (i = 0; i < 10; i++){
		if (getpid() == ppid)
		{
			fork();
		}
	}
	sleep(20);
	return 0;
}
