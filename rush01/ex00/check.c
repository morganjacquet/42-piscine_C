/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mthiebau <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 14:50:24 by mthiebau     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 22:01:09 by mthiebau    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_strlen(char *str);

int		check_argv(char *str)
{
	int it;

	it = 0;
	while ((str[it] == ' ' && str[it + 1] != ' ')
			|| ((str[it] >= '1' && str[it] <= '9')
				&& (str[it + 1] == ' ' || str[it + 1] == '\0')))
		it++;
	if (str[it])
		return (-1);
	if (ft_strlen(str) == 23)
		return (3);
	if (ft_strlen(str) == 31)
		return (4);
	if (ft_strlen(str) == 39)
		return (5);
	if (ft_strlen(str) == 47)
		return (6);
	if (ft_strlen(str) == 55)
		return (7);
	if (ft_strlen(str) == 63)
		return (8);
	if (ft_strlen(str) == 71)
		return (9);
	return (-1);
}

bool	check_char(char *str, int size)
{
	int it;

	it = 0;
	while (str[it] == ' ' || (str[it] >= '1' && str[it] <= (char)size + '0'))
		it++;
	if (!str[it])
		return (true);
	return (false);
}

bool	check_comb(char **grid, int size)
{
	int it;

	it = 0;
	while (it < size)
	{
		if ((grid[0][it] + grid[1][it] > size + 1)
			|| (grid[0][it] == 1 && grid[1][it] == 1)
			|| (grid[2][it] + grid[3][it] > size + 1)
			|| (grid[2][it] == 1 && grid[3][it] == 1))
			return (false);
		it++;
	}
	return (true);
}
