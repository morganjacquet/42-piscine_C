/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   header.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/20 13:19:05 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 21:31:42 by jguerin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

extern char g_symbols[3];

int		ft_valid_map(char *map, int line, char *symbols, int compt);
void	ft_mallocmap(int i, char *filename);
void	ft_malloc_nomap(int i, char *mapbuff);
void	ft_exit(void);
char	*ft_mallocchar(int i);
int		ft_strlenrow(char *str, int start, char *symbols);
int		ft_strlenfirst(char *str, int start);
char	**ft_create_tab(char *map, int line, int row, int index);
int		ft_square(char **map, int lon, int lar);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	*ft_getsymbols(char *mapstr, char *symbols);
int		ft_getline(char *mapstr);
int		test_error(int linelin, int i);

#endif
