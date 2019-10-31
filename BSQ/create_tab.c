/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   create_tab.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 11:51:56 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:40:06 by cserain     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

char	**ft_create_tab_2(char **maptab, int index, char *map)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (map[index] > 0)
	{
		while (map[index] != '\n' && map[index] > 0)
		{
			maptab[x][y] = map[index];
			index++;
			y++;
		}
		maptab[x][y] = '\0';
		index++;
		y = 0;
		x++;
	}
	maptab[x][0] = '\0';
	return (maptab);
}

char	**ft_create_tab(char *map, int line, int row, int index)
{
	char	**maptab;
	int		i;

	i = 0;
	if (!(maptab = malloc(sizeof(char *) * (line + 1))))
		return (0);
	while (i < line + 1)
	{
		if (!(maptab[i] = malloc(sizeof(char) * (row + 1))))
			return (0);
		i++;
	}
	if (maptab == NULL)
	{
		return (0);
	}
	maptab = ft_create_tab_2(maptab, index, map);
	return (maptab);
}
