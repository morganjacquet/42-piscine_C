/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 18:12:30 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 19:30:00 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_i;
	unsigned int i;

	src_i = 0;
	while (src[src_i] != '\0')
	{
		++src_i;
	}
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size - 1)
		{
			dest[i] = '\0';
		}
	}
	dest[i] = '\0';
	return (src_i);
}
