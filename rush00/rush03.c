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

void	ft_putchar(char c);//on prototype la fonction qui ce trouve dan ft_putchar

void	ft_line(int x, int y, int h, int i)
{
	if ((i == 1 && h == 1) || (i == 1 && h == x))//premier caractere de la 1er et derniere ligne
	{
		ft_putchar('A');
	}
	else if ((h == 1 && i != 1 && i != y) || (h != 1 && i == 1))//premier caractere des autres ligne et caractere du milieu de la 1er ligne
	{
		ft_putchar('B');
	}
	else if ((h == 1 && i == y) || (h == x && i == y))//dernier caractere de la 1er et derniere ligne
	{
		ft_putchar('C');
	}
	else if ((h != 1 && i == y) || (h == x && i != y))//dernier caractere des autres ligne que la premiere et derniere
	{
		ft_putchar('B');
	}
	else if ((h != 1 && i != 1) || (h != 1 && i != y))//caractere du milieu des autres ligne que la premiere et derniere 
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int h;
	int i;

	h = 0;//on defini la ligne a 0 (nombre max definie par x)
	i = 0;//on defini la ligne a 0 (nombre max definie par y)
	if (x > 0 && y > 0)//on m'affiche rien si au moins une valeur est a 0
	{
		while (h++ < x)//on boucle sur chaque ligne
		{
			while (i++ < y)//on boucle sur chaque colone
			{
				ft_line(x, y, h, i);
			}
			i = 0;//on remet a zero les colone pour la prochaine ligne
			ft_putchar('\n');//retour a la ligne apres la fin d'une ligne
		}
	}
}
