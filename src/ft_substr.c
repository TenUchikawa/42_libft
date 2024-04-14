/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 08:40:55 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)

{
	char *new_str;
	size_t i;
	size_t j;

	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!s || !(new_str))
		return (0);

	i = start;
	j = 0;

	while (start < ft_strlen(s) && j < size)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
