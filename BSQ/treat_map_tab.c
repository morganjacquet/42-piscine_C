/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   treat_map.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/19 15:03:48 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:40:37 by cserain     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

char g_symbols[3];

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[x])
	{
		dest[i + x] = src[x];
		x++;
	}
	x++;
	dest[i + x] = '\0';
	return (dest);
}

void	ft_read_map(char *map)
{
	int		i;
	int		file;
	char	c;

	i = (int)malloc(sizeof(int));
	i = 0;
	file = open(map, O_RDONLY);
	if (file == -1)
	{
		return ;
	}
	while (read(file, &c, 1) > 0)
	{
		i++;
	}
	close(file);
	ft_mallocmap(i, map);
}

void	ft_no_param(void)
{
	char	*dest;
	int		i;
	char	buf[2];

	i = 0;
	dest = malloc(sizeof(char) * 100000);
	while (read(0, buf, 1))
	{
		buf[1] = '\0';
		ft_strcat(dest, buf);
		i++;
	}
	ft_malloc_nomap(i, dest);
}

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	if (argc == 1)
	{
		ft_no_param();
		return (0);
	}
	while (x < argc)
	{
		ft_read_map(argv[x]);
		x++;
	}
	return (0);
}
