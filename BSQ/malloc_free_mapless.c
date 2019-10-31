/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   malloc_free_mapless.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 19:22:27 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:40:34 by lsanchez    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "header.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_malloc_nomap(int i, char *mapbuff)
{
	char	*mapstr;
	int		line;
	int		row;
	char	*symbols;

	line = (int)malloc(sizeof(int));
	row = (int)malloc(sizeof(int));
	symbols = ft_mallocchar(3);
	mapstr = ft_mallocchar(i);
	mapstr = ft_strncpy(mapstr, mapbuff, i);
	free(mapbuff);
	symbols = ft_getsymbols(mapstr, symbols);
	line = ft_getline(mapstr);
	row = ft_valid_map(mapstr, line, symbols, 0);
	free(mapstr);
	free(symbols);
	if (row == -1)
		return ;
}
