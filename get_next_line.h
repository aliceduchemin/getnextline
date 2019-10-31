/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduchemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:33:01 by aduchemi          #+#    #+#             */
/*   Updated: 2019/10/31 10:36:17 by aduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
char	*ft_realloc(size_t count, char *dest, int car);
char	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strlen(char *str);
int		ft_get_2_squeeze(char *buf, char **line, int *i, int *lus);

#endif
