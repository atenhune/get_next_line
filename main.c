/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antti <antti@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:18:21 by antti             #+#    #+#             */
/*   Updated: 2021/12/14 23:59:41 by antti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	char *line;
	int fd;
	int i = 0;
	fd = open("raamattu", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%d	:	%s\n", i, line);
		free(line);
		i++;
	}
	close(fd);

	// char *line;
	// int fd1;
	// int fd2;
	// fd1 = open("testi00", O_RDONLY);
	// fd2 = open("testi01", O_RDONLY);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// close(fd1);
	// close(fd2);


	// char *line;
	// int fd1;
	// int ret;
	// fd1 = open("testi02", O_RDONLY);
	// ret = get_next_line(fd1, &line);
	// printf("%d	%s\n", ret, line);
	// ret = get_next_line(fd1, &line);
	// printf("%d	%s\n", ret, line);
	// close(fd1);


	// char *line;
	// int fd1;
	// int ret;
	// fd1 = open("testi03", O_RDONLY);
	// ret = get_next_line(fd1, &line);
	// printf("%d	%s\n", ret, line);
	// ret = get_next_line(fd1, &line);
	// printf("%d	%s\n", ret, line);
	// ret = get_next_line(fd1, &line);
	// printf("%d	%s\n", ret, line);
	// close(fd1);


	// char *line;
	// int ret;
	// int fd1;
	// ret = get_next_line(3, &line);
	// printf("%d	%s\n", ret, line);
	// fd1 = open("testi03", O_RDONLY);
	// ret = get_next_line(-1, &line);
	// printf("%d	%s\n", ret, line);
	// ret = get_next_line(100000, &line);
	// printf("%d	%s\n", ret, line);
	// close(fd1);
}