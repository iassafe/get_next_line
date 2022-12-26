/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:23:46 by iassafe           #+#    #+#             */
/*   Updated: 2022/12/24 17:42:50 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define  GET_NEXT_LINE_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	4
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *left_str);
char	*get_after_newline(char *stock);
int		ft_line_len(char *str);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *left_str, char *buff);
#endif
