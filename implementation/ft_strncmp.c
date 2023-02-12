
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:56:01 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/08 22:22:02 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0')
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char    s1[] = "aBcdefgh";
	char	s2[] = "abcdefgh";
	unsigned int	n;
    int ret;
	n = 5;
	ret = ft_strncmp(s1, s2, n);
	printf("%i\n", n);
    printf("%i\n", ret);
	printf("%d\n", strncmp(s1, s2, n));
    printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
/*
DESCRIPTION
       The  strcmp()  function compares the two strings s1 and s2.  The locale
       is not taken into account (for  a  locale-aware  comparison,  see  str‐
       coll(3)).   It  returns an integer less than, equal to, or greater than
       zero if s1 is found, respectively, to be less than,  to  match,  or  be
       greater than s2.
       The  strncmp()  function  is similar, except it compares only the first
       (at most) n bytes of s1 and s2.
*/