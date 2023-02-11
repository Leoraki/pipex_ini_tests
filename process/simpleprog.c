#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	pid_t	father;
	
	father = fork();
	if (father > 0)
		{
			wait();
			printf("I am your father\n");
		}
	if (father == 0)
		{
		sleep(10);
		execve("/bin/ls",av,NULL);
		}
return(0);
}

