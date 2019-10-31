/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:59:37 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:26:16 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(int x, int y, int h, int i)
{
	if ((i == 1 && h == 1) || (i == 1 && h == x))
	{
		ft_putchar('A');
	}
	else if ((h == 1 && i != 1 && i != y) || (h != 1 && i == 1))
	{
		ft_putchar('B');
	}
	else if ((h == 1 && i == y) || (h == x && i == y))
	{
		ft_putchar('C');
	}
	else if ((h != 1 && i == y) || (h == x && i != y))
	{
		ft_putchar('B');
	}
	else if ((h != 1 && i != 1) || (h != 1 && i != y))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int h;
	int i;

	h = 0;
	i = 0;
	if (x > 0 && y > 0)
	{
		while (h++ < x)
		{
			while (i++ < y)
			{
				ft_line(x, y, h, i);
			}
			i = 0;
			ft_putchar('\n');
		}
	}
}
