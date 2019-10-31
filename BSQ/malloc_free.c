/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   malloc_free.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 11:30:39 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 20:01:19 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

char	*ft_mallocchar(int i)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * i)))
		return (0);
	return (str);
}

void	ft_mallocmap(int i, char *filename)
{
	char	*mapstr;
	int		file;
	int		line;
	int		row;
	char	*symbols;

	symbols = ft_mallocchar(3);
	file = open(filename, O_RDONLY);
	mapstr = ft_mallocchar(i);
	read(file, mapstr, i);
	close(file);
	symbols = ft_getsymbols(mapstr, symbols);
	line = ft_getline(mapstr);
	row = ft_valid_map(mapstr, line, symbols, 0);
	free(mapstr);
	free(symbols);
	if (row == -1)
		return ;
}
