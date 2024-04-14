/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 11:45:01 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t	i;
	char	*b;

	b = (char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] == ch)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return (&b[i]);
}
