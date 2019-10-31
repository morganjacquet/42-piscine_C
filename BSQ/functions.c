/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   functions.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 10:40:46 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:20:19 by jguerin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str = str + 1;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i - 3);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int end;

	end = ft_strlen(str);
	i = 0;
	result = 0;
	while (48 <= str[i] && str[i] <= 57 && i < end)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

char	*ft_getsymbols(char *mapstr, char *symbols)
{
	int		i;
	int		temp;
	char	swap;

	i = 0;
	while (mapstr[i] != '\n')
		i++;
	i--;
	temp = i;
	while (i > temp - 3)
	{
		symbols[temp - i] = mapstr[i];
		i--;
	}
	swap = symbols[0];
	symbols[0] = symbols[2];
	symbols[2] = swap;
	g_symbols[0] = symbols[0];
	g_symbols[1] = symbols[1];
	g_symbols[2] = symbols[2];
	return (symbols);
}

int		ft_getline(char *mapstr)
{
	int line;

	line = ft_atoi(mapstr);
	return (line);
}
