/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 02:09:13 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 17:55:50 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i <= (nb / i))
	{
		count = i * i;
		if (count == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
