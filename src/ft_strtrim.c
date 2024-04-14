/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 08:40:52 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	is_in_set(char const c, char const *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

int	get_start(char *s1, char *set)
{
	int	i;
	int	res;

	i = -1;
	res = 0;
	while (s1[++i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

int	get_end(char *s1, char *set)
{
	int	i;
	int	res;

	i = ft_strlen(s1);
	res = 0;
	while (s1[--i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (ft_strlen(s1) == (long unsigned int)start)
		return ("");
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, ft_strlen(s1) - start - end + 1);
	return (str);
}
