/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:10:39 by antti             #+#    #+#             */
/*   Updated: 2021/12/14 19:18:01 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	is_there_end(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	newline(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (ret == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = '\0';
	
	free((void *)s1);
	return (ret);
}

int	toomanylines(char **save, int *read_ret, int fd)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (buff == NULL)
		return (-1);
	while (!is_there_end(*save) && *read_ret != 0)
	{
		*read_ret = read(fd, buff, BUFF_SIZE);
		if (*read_ret == -1)
		{
			free(buff);
			return (-1);
		}
		buff[*read_ret] = '\0';
		if (!*save)
			*save = ft_strnew(0);
		*save = strjoin(*save, buff);
	}
	free(buff);
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static char	*save[4096];
	int			read_ret;
	int			newline_index;

	read_ret = BUFF_SIZE;
	if (!line || fd > 4096 || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (toomanylines(&save[fd], &read_ret, fd) == -1)
		return (-1);
	newline_index = newline(save[fd]);
	if (save[fd][0] != '\0')
		*line = ft_strsub(save[fd], 0, newline_index);
	if (is_there_end(save[fd]))
		save[fd] = ft_strcpy(&save[fd][0], &save[fd][newline_index + 1]);
	if (read_ret == 0 && save[fd][0] == '\0')
	{
		// free(save[fd]);
		return (0);
	}
	if (read_ret == 0 && !is_there_end(save[fd]))
		ft_strclr(save[fd]);
	return (1);
}
