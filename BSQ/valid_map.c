/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   valid_map.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 11:47:21 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:40:23 by cserain     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

int		ft_error(void)
{
	ft_putstr("map error\n");
	return (-1);
}

int		test_error(int linelen, int i)
{
	if (linelen < 0)
		return (-1);
	if (linelen != i)
		return (ft_error());
	return (0);
}

int		ft_valid_map(char *map, int line, char *symbols, int compt)
{
	int i;
	int linelen;
	int index;
	int allline;

	i = ft_strlenfirst(map, 0);
	index = i;
	i = ft_strlenrow(map, i, symbols);
	compt = index + i;
	if (map == NULL || i <= 0)
		return (ft_error());
	allline = line;
	while (line > 1)
	{
		linelen = ft_strlenrow(map, compt, symbols);
		if (test_error(linelen, i) < 0)
			return (-1);
		compt = compt + linelen;
		line--;
	}
	linelen = ft_strlenrow(map, compt, symbols);
	if (linelen > 1)
		return (ft_error());
	ft_square(ft_create_tab(map, allline, i - 1, index), (i - 1), allline);
	return (i - 1);
}
