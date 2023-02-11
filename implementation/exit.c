/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:33:14 by lmangall          #+#    #+#             */
/*   Updated: 2023/02/10 23:38:23 by lmangall         ###   ########.fr       */
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
#include <errno.h>

//free
int exit_p(int exitnbr)
{
	if(exitnbr == 1)
	{
		printf("There is not enough arguments\n");
		return(1);
	}

	if(exitnbr == 2)
	{
		perror("Perror output(from exit): ");
		return(1);
	}

	return (0);
}