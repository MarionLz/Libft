/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <malauzie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:12:38 by malauzie          #+#    #+#             */
/*   Updated: 2023/10/10 09:00:38 by malauzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_isprint : checks for any printable character including space.
Return value :
- nonzero if the character c falls into the tested class
- zero if not.*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("| ft_isprint |\n");
	printf("1 == %d\n", ft_isprint(32));
	printf("1 == %d\n", ft_isprint(105));
	printf("0 == %d\n", ft_isprint(4));
	return (0);
}*/
