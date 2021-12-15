/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:18:21 by antti             #+#    #+#             */
/*   Updated: 2021/12/15 14:15:29 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	
	char *line;
	int fd;
	if(argc != 2)
		return(0);
	fd = open(argv[1], O_RDONLY); 
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
	}
	close(fd);
}