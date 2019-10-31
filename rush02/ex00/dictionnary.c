/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   dictionary.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lselmers <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 21:41:47 by lselmers     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 22:21:21 by lselmers    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "dictionary.h"

int				compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);
		x++;
		y++;
	}
	return (1);
}

int				ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i++])
	{
	}
	return (i);
}

t_dictionnary	ft_newdict(unsigned int nbline)
{
	t_dictionnary	out;

	if (nbline == 0)
	{
		write(2, "ft_newdict error got nbline > 0", 32);
		return (out);
	}
	out.nbline = nbline;
	out.indice = 0;
	if (!(out.dict = (t_arraystring *)\
				malloc(sizeof(t_arraystring *) * nbline + 1)))
		return (out);
	return (out);
}

char			*get(t_dictionnary *dicti, char *element)
{
	dicti->indice = 0;
	while (dicti->indice < dicti->nbline)
	{
		if (compare(dicti->dict[dicti->indice].element, element))
			return (dicti->dict[dicti->indice].traduction);
		dicti->indice += 1;
	}
	dicti->indice = 0;
	return (NULL);
}

bool			set(t_dictionnary *dicti, char *element, char *traduction)
{
	int	lenelement;
	int	lentrad;
	int i;

	i = 0;
	lenelement = ft_len(element);
	lentrad = ft_len(traduction);
	if (!(dicti->dict[dicti->indice].element =\
				(char *)malloc(sizeof(char) * lenelement)))
		return (false);
	if (!(dicti->dict[dicti->indice].traduction =\
					(char *)malloc(sizeof(char) * lentrad)))
		return (false);
	i = 0;
	while (i <= lenelement)
	{
		dicti->dict[dicti->indice].element[i] = element[i];
		i++;
	}
	while (i >= 0)
	{
		dicti->dict[dicti->indice].traduction[i] = traduction[i];
		i--;
	}
	return (true);
}
