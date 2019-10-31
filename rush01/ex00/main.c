/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: emassard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 08:18:56 by emassard     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 23:04:06 by mthiebau    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		check_argv(char *str);
bool	check_char(char *str, int size);
char	**create_tab_ref(char *str, int size);
bool	check_comb(char **grid, int size);
char	**fill_tab(char **grid, int size);

void	print_tab(char **tab, int size)
{
	int	it_x;
	int it_y;

	it_y = 0;
	while (it_y < 4)
	{
		it_x = 0;
		while (it_x < size)
		{
			ft_putchar(tab[it_y][it_x] + '0');
			it_x++;
		}
		ft_putchar('\n');
		it_y++;
	}
}

int		main(int ac, char **av)
{
	int		tab_size;
	char	**grid;

	if (ac != 2)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	tab_size = check_argv(av[1]);
	if (tab_size == -1 || !check_char(av[1], tab_size))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	grid = create_tab_ref(av[1], tab_size);
	if (!check_comb(grid, tab_size))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	print_tab(grid, tab_size);
	return (0);
}
