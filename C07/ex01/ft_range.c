/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 03:01:47 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 13:20:28 by mojacque    ###    #+. /#+    ###.fr     */
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
	{
		return (tab);
	}
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
	{
		return (tab);
	}
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
