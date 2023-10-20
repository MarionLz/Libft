/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzie <malauzie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:36:22 by malauzie          #+#    #+#             */
/*   Updated: 2023/10/19 08:21:58 by malauzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_split : allocates (malloc) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end with a
NULL pointer.
Return value :
- the array of new strings resulting from the split.
- NULL if the allocation fails.*/

static int	ft_count_bloc(char const *s, char c)
{
	int		i;
	int		count_bloc;

	i = 0;
	count_bloc = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count_bloc++;
		i++;
	}
	return (count_bloc);
}

static void	*ft_count_char(char const *s, char c, char **tab, int size)
{
	int	i;
	int	j;
	int	count_char;

	i = 0;
	j = 0;
	while (s[i] && j < size)
	{
		count_char = 0;
		while (s[i] != c && s[i])
		{
			count_char++;
			i++;
		}
		if ((s[i] == c || s[i] == '\0') && i != 0 && s[i - 1] != c)
		{
			tab[j] = (char *)malloc(count_char * sizeof(char) + 1);
			if (!tab[j])
				return (NULL);
			ft_strlcpy(tab[j], &s[i - count_char], count_char + 1);
			j++;
		}
		i++;
	}
	return (tab[j]);
}

char	**ft_split(char const *s, char c)
{
	int		size_tab;
	char	**tab;

	size_tab = ft_count_bloc(s, c);
	tab = (char **)malloc((size_tab + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_count_char(s, c, tab, size_tab);
	tab[size_tab] = NULL;
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	printf("| ft_split |\n");

	int		i;
	char	**tab_split;
	char	*str_split = "xxhelxxlo!xxxxxxxx";
	char	char_sep = 'x';

	i = 0;
	tab_split = ft_split(str_split, char_sep);

	while (i < ft_count_bloc(str_split, char_sep))
	{
		printf("%s\n", tab_split[i]);
		free (tab_split[i]);
		i++;
	}
	free (tab_split);
}*/