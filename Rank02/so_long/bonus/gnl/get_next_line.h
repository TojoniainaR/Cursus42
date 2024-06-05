/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:29:24 by torandri          #+#    #+#             */
/*   Updated: 2024/05/18 07:05:17 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strchr_gnl(char *s, char c);
size_t	ft_strlen_gnl(const char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strcpy_gnl(char *dest, char *src);
char	*ft_strdup_gnl(char *s);
char	*ft_substr_gnl(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);

#endif
