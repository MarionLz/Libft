/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <malauzie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:24:40 by malauzie          #+#    #+#             */
/*   Updated: 2023/10/10 10:21:13 by malauzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_putendl_fd : outputs the string ’s’ to the given file descriptor
followed by a newline.*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	printf("| ft_putendl_fd |");
	
	int	fd;

	fd = open("test_fd.txt", O_RDWR | O_TRUNC);
	if (fd == -1)
		printf("open failed !\n");
	ft_putendl_fd("Hello World", fd);
	if (close (fd) == -1)
		printf("close failed\n");
	return (0);
}*/