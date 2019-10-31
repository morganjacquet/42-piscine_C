/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 15:14:56 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 21:37:00 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int count;

	if (nb < 0)
	{
		return (0);
	}
	count = 1;
	i = 1;
	while (i <= nb)
	{
		count = count * i;
		i++;
	}
	return (count);
}
