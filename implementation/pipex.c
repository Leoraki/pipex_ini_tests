/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:33:22 by lmangall          #+#    #+#             */
/*   Updated: 2023/02/11 18:16:23 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

// Your program will be executed as follows:
// ./pipex file1 cmd1 cmd2 file2         (arg 1 : program name)
//           2     3   4     5

// TEST COMMAND:  ./pipex -l -l -f -f -f
// ./pipex file.txt ls ls file2.txt

// Use the main syscall arguments and split to find the command
// wait pid -1



//        #include <sys/types.h>
//        #include <sys/wait.h>

//        pid_t wait(int *wstatus);

//        pid_t waitpid(pid_t pid, int *wstatus, int options);





int pipex(int argc, char *argv[])
{
	int 	i;
	int 	j;
	int 	READ_END;//should it be a STATIC INT ?
	int		WRITE_END;//should it be a STATIC INT ?
	int		fd[2];
	pid_t	child;

	i = 0;
	j = 0;
	READ_END = 0;
	WRITE_END = 1;
	child = -1;
	printf("%i arguments\n", argc);
	if(argc < 5)
		exit_p(1);

	// i = open(argv[2], O_RDONLY);
	// 	if(i == -1)
	// 		exit_p(2);
		// else
		// 	{
		// 		read
		// 	}

	pipe(fd);
	child = fork();
	if(child == -1)//error
	{
		perror("error mark");
		return(1);
		close (fd [READ_END]);
		close (fd [WRITE_END]);
	}
	if(child == 0)//child
	{
		dup2(fd [WRITE_END], STDOUT_FILENO);//int dup2(int oldfd, int newfd);
		printf("- child here %i\n", child);
		printf("WRITE_END %i\n", WRITE_END);
		printf("STDOUT_FILENO %i\n\n", STDOUT_FILENO);
		perror("Perror output 1: ");
		execve("/bin/ls", NULL, NULL);
	}
	if(child > 0)//parent
	{
		// j = open(argv[2], O_RDONLY);
		// if(j == -1)
		// 	exit_p(2);
		dup2(fd [READ_END], STDIN_FILENO);
		close(fd [WRITE_END]);
		wait(NULL);
		printf("- parent here %i\n", child);
		printf("READ_END %i\n", READ_END);
		printf("STDIN_FILENO %i\n", STDIN_FILENO);
		perror("Perror output 2: ");
		execve("/bin/ls", NULL, NULL);
	}
	return (0);
}

int main(int argc, char *argv[]) 
{
    pid_t   child = -1;

child = fork();
	if(child == -1)//error
		perror("error XX");
	else if(child > 0)//parent
	{
		pipex(argc, argv);
		perror("Error");
	}
	wait(NULL);

	return(0);
}



//  open, close, read, write,
// malloc, free, perror,
// strerror, access, dup, dup2,
// execve, exit, fork, pipe,
// unlink, wait, waitpid




// void run_pipe(void) 
// {
// int const   READ_END    = 0;
// int const   WRITE_END   = 1;
// pid_t       child       = -1;
// char *      cmd1        = NULL;
// char *      cmd2        = NULL;
// char *      args1[3];
// char *      args2[3];
// int         pdes[2];

// cmd1 = "/bin/ls";
// args1[0] = cmd1;
// args1[1] = NULL;
// args1[2] = NULL;

// cmd2 = "/bin/cat";
// args2[0] = cmd2;
// args2[1] = "-e";
// args2[2] = NULL;

// pipe(pdes);
// child = fork();
// switch ((int)child) 
// {
    
//     case -1: /* error */
//     close ( pdes [READ_END] );
//     close ( pdes [WRITE_END] );
//     perror("error");
//     break;
    
    
//     case 0: /* child */
//     dup2( pdes [WRITE_END], STDOUT_FILENO );
//     close( pdes [READ_END] );
//     execve( cmd1, args1, NULL);
//     perror( "error" );
//     break;

// }

// /* parent */
// dup2( pdes [READ_END], STDIN_FILENO );
// close( pdes [WRITE_END] );
// wait( NULL);
// execve(cmd2, args2, NULL);
// return;
// }

// int main( void ) 
// {
//     pid_t   child = -1;
    
//     child = fork();
//     switch ( (int) child ) 
// 	{
// 		case -1:
// 			perror("error");
// 			break;
		
// 		case 0:

// 			run_pipe();
// 			perror("error");
// 			break;
// 	}
// 	wait(NULL);

// 	return(0);
// }
