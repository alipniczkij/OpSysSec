#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	int pid = fork();
	if (pid == 0) {
		printf("Идентификатор дочернего процесса: %d, Идентификатор родительского процесса: %d\n", getpid(), getppid());
		sleep(10);
	}
	else if (pid > 0) {
		printf("Это сообщение из родительского процесса: идентификатор дочернего процесса: %d\n", pid);
		sleep(10);
	}
	return 0;
}
