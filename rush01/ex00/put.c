/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   put.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mthiebau <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 11:23:59 by mthiebau     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 19:23:57 by emassard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	unsigned int it;

	it = 0;
	while (str[it])
	{
		ft_putchar(str[it]);
		it++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = -nb;
	}
	else
		u_nb = nb;
	if (u_nb >= 10)
	{
		ft_putnbr(u_nb / 10);
		ft_putchar((u_nb % 10) + '0');
	}
	else
		ft_putchar(u_nb + '0');
}

int		ft_strlen(char *str)
{
	int it;

	it = 0;
	while (str[it])
		it++;
	return (it);
}
