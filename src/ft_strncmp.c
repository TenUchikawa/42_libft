/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 05:44:17 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	size_t i;

	i = 0;

	while (s1[i] != 0 && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}

	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}