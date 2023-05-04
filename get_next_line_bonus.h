/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:22:57 by iassafe           #+#    #+#             */
/*   Updated: 2022/12/26 18:34:16 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define  GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	3
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *left_str);
int		ft_line_len(char *k);
char	*get_after_newline(char *stock);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *left_str, char *buff);
#endif
