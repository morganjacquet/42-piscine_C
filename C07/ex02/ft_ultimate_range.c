/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 04:06:58 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 16:14:43 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (range == 0)
			return (-1);
	}
	return (max - min);
}
