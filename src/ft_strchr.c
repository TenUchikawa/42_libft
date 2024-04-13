/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 05:28:45 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int i;
	i = 0;

	// if (*s == c)
	// 	return (s);

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	if (s[i] == c)
		return (&(s[i]));

	return (NULL);
}