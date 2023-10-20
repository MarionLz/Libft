/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <malauzie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:46 by malauzie          #+#    #+#             */
/*   Updated: 2023/10/10 10:21:25 by malauzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_putstr : outputs the string ’s’ to the given file descriptor.*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	printf("| ft_putstr_fd |\n");
	
	int	fd;

	fd = open("test_fd.txt", O_RDWR | O_TRUNC);
	if (fd == -1)
		printf("open failed !\n");
	ft_putstr_fd("Hello World", fd);
	if (close (fd) == -1)
		printf("close failed\n");
	return (0);
}*/