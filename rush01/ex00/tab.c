/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tab.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mthiebau <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 22:26:53 by mthiebau     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:04:09 by mthiebau    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	**malloc_tab(int size_x, int size_y)
{
	char	**tab;
	int		it;

	it = 0;
	tab = (char**)malloc(size_y * sizeof(char*));
	while (it < size_y)
	{
		tab[it] = (char*)malloc((size_x + 1) * sizeof(char));
		it++;
	}
	return (tab);
}

char	*clear_string(char *str)
{
	int		it_1;
	int		it_2;
	char	*str_clear;

	it_1 = 0;
	it_2 = 0;
	str_clear = (char*)malloc(ft_strlen(str) * sizeof(char));
	while (str[it_1])
	{
		if (str[it_1] == ' ')
			it_1++;
		str_clear[it_2] = str[it_1];
		it_1++;
		it_2++;
	}
	str_clear[it_2] = '\0';
	return (str_clear);
}

char	**create_tab_ref(char *str, int size)
{
	int		it;
	int		it_x;
	int		it_y;
	char	*str_clear;
	char	**tab;

	tab = malloc_tab(size, 4);
	str_clear = clear_string(str);
	it = 0;
	it_x = 0;
	it_y = 0;
	while (str_clear[it])
	{
		tab[it_y][it_x] = str_clear[it] - '0';
		if ((it + 1) % size == 0 && it != 0)
		{
			tab[it_y][it_x + 1] = '\0';
			it_x = -1;
			it_y++;
		}
		it_x++;
		it++;
	}
	free(str_clear);
	return (tab);
}
