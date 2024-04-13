/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:51:07 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 05:55:06 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *buf, int ch, size_t n);
void	ft_bzero(void *b, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
size_t	ft_strlen(const char *s);
#endif