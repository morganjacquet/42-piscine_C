/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 19:20:58 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 11:38:48 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (nb < 10)
	{
		ft_putchar(i + '0');
	}
}

void	ft_return(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(b);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
	else
	{
		if (b != 99)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_return(a, b);
			b++;
		}
		a++;
	}
}
