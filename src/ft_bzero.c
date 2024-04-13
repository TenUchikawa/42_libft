/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:14:18 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/01 11:19:22 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *b, size_t len)
{
	int i;
	i = 0;

	unsigned char *ptr;
	ptr = b;

	while (i < (int)len)
	{
		ptr[i] = 0;
		i++;
	}
}