/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:33:28 by lmangall          #+#    #+#             */
/*   Updated: 2023/02/12 15:53:55 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIP_H
# define PIP_H

#include "pipex.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

int main(int argc, char *argv[], char *envp[]);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int exit_p(int exitnbr);

#endif

