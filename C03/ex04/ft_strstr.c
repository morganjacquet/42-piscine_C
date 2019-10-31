/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 11:51:38 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 19:02:37 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int f;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f] && to_find[f] != '\0')
		{
			f++;
			if (to_find[f] == '\0')
			{
				return (&str[f]);
			}
		}
		i++;
	}
	return (0);
}
