/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   dictionary.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lselmers <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 13:54:28 by lselmers     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:07:40 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DICTIONNARY_H
# define DICTIONNARY_H

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_arraystring
{
	char	*element;
	char	*traduction;

}				t_arraystring;

typedef struct	s_dictionnary
{
	unsigned int	nbline;
	unsigned int	indice;
	t_arraystring	*dict;

}				t_dictionnary;

bool			set(t_dictionnary *dicti, char *element, char *traduction);
char			*get(t_dictionnary *dicti, char *element);
int				compare(char *x, char *y);

#endif
