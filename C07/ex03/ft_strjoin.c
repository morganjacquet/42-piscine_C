/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 00:09:52 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 12:52:26 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char **str, int size, char *sep)
{
	int x;
	int y;
	int result;
	int s;

	x = 0;
	y = -1;
	result = 0;
	s = 0;
	while (sep[s])
		s++;
	while (x < size)
	{
		while (str[x][++y])
			result++;
		y = -1;
		x++;
	}
	result = result + (s * size - 1);
	return (result);
}

char	*ft_strcat(char *dest, const char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	tab = malloc(sizeof(*tab) * ft_strlen(strs, size, sep) + 1);
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	i = 0;
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
