/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:45:26 by pcaplat           #+#    #+#             */
/*   Updated: 2026/01/08 11:01:20 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_gnlcalloc(size_t n, size_t size);
char	*ft_gnlsubstr(char **s);
char	*ft_strfdup(char *s, int index);
char	*set_substr(const char *s, int len);
int		ft_strlen_sep(const char *s, char sep);
int		ft_isinstr(const char *s, char c);

#endif
