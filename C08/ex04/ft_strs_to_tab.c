/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strs_to_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 22:59:54 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 22:59:56 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char *) * ft_strlen(src))))
		return (0);
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*tab;

	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	j = 0;
	while (i < ac)
	{
		if (av[i])
		{
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
		}
		j++;
		i++;
		j = 0;
	}
	tab[i].str = 0;
	return (tab);
}
