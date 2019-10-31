/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   make_square.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 13:31:24 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 20:58:20 by jguerin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

int		ft_putstr_tab(char **map, int lar, int lon)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j <= lar)
	{
		i = 0;
		while (i <= lon)
		{
			write(1, &map[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	free(map);
	return (1);
}

void	ft_print_x(char **map, int position_long, int position_lar, int size)
{
	int i;
	int j;

	j = position_lar;
	while (j < size + position_lar)
	{
		i = position_long;
		while (i < size + position_long)
		{
			map[j][i] = g_symbols[2];
			i++;
		}
		j++;
	}
}

int		ft_check_size(char **map, int position_long, int position_lar, int size)
{
	int i;
	int j;

	j = position_lar;
	while (j < size + position_lar)
	{
		i = position_long;
		while (i < size + position_long)
		{
			if (map[j][i] != g_symbols[0])
				return (0);
			i++;
		}
		j++;
	}
	ft_print_x(map, position_long, position_lar, size);
	return (1);
}

int		ft_square_size(int lar, int lon)
{
	if (lar <= lon)
		return (lar);
	else
		return (lon);
}

int		ft_square(char **map, int lon, int lar)
{
	int position_long;
	int position_lar;
	int size;

	position_lar = 0;
	size = ft_square_size(lar, lon);
	while (size != 0)
	{
		position_lar = 0;
		while (position_lar <= lar - size)
		{
			position_long = 0;
			while (position_long <= lon - size)
			{
				if (ft_check_size(map, position_long, position_lar, size) == 1)
					return (ft_putstr_tab(map, lar, lon));
				position_long++;
			}
			position_lar++;
		}
		size--;
	}
	return (0);
}
