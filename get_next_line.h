/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:46:20 by antti             #+#    #+#             */
/*   Updated: 2021/12/14 14:20:16 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_
# define _GET_NEXT_LINE_

# define BUFF_SIZE 4096

# include "libft.h"

int		get_next_line(const int fd, char **line);

#endif