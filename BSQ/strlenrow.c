/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strlenrow.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 11:50:22 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 20:41:47 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

int		ft_strlenrow(char *str, int start, char *symbols)
{
	int count;

	count = 0;
	while (str[start + count] != '\n' && str[start + count] != '\0')
	{
		if (str[start + count] != symbols[0] &&
				str[start + count] != symbols[1])
		{
			ft_putstr("map error\n");
			return (-1);
		}
		count++;
	}
	count++;
	return (count);
}

int		ft_strlenfirst(char *str, int start)
{
	int count;

	count = 0;
	while (str[start + count] != '\n')
	{
		count++;
	}
	count++;
	return (count);
}
