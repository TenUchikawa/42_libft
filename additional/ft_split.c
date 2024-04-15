/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 08:59:09 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	word_count(char const *s, char c)
{
	int		count;
	int		i;
	char	tmp;

	count = 0;
	i = 0;
	tmp = c;
	while (s[i])
	{
		if (s[i] == c && c != tmp)
			count++;
		tmp = s[i];
		i++;
	}
	return (count);
}

int	len_to_delimiter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	int		wc;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		res[j++] = ft_substr(s, i, len_to_delimiter(s + i, c));
		i += len_to_delimiter(s + i, c);
	}
	res[j] = NULL;
	return (res);
}
