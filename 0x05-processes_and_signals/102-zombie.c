#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * while loop.
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * Creates a new zombie process
 * Return: void
 */
void create_process(void)
{
	int rc = fork();

	if (rc == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 *  Creates 5 zombie processes.
 *
 * Return: 0 on success
 */
int main(void)
{
	create_process();
	create_process();
	create_process();
	create_process();
	create_process();
	return (infinite_while());
}
