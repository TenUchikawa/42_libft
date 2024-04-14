/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:51:07 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/14 11:46:11 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// # include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *buf, int ch, size_t n);
void				ft_bzero(void *b, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strrchr(char *s, int c);
char				*ft_strchr(char *s, int c);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t size);
char				*ft_itoa(int n);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
t_list				*ft_lstnew(void *content);
void				ft_lstclear(t_list **lst, void (*del)(void *));

#endif