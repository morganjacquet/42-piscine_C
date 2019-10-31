/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert2.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cserain <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 17:08:50 by cserain      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:06:32 by cserain     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*bil(int i, char *nb_decomp, char *nb, int j)
{
	int len_nb;
	int a;

	len_nb = ft_strlen(nb);
	if (len_nb == 10)
	{
		if (nb[0] != '1')
		{
			nb_decomp[i] = nb[0];
			nb_decomp[i + 1] = '\n';
			i = i + 2;
		}
		a = i + 10;
		while (i <= a)
		{
			nb_decomp[i] = '0';
			if (i == a - 10)
				nb_decomp[i] = '1';
			i++;
		}
		nb_decomp[i] = '\n';
	}
	return (nb_decomp);
}

char	*mil(int i, char *nb_decomp, char *nb, int j)
{
	int a;
	int len_nb;

	len_nb = ft_strlen(nb) - j;
	if (len_nb <= 9 && len_nb >= 7)
	{
		if (nb[j] != '1')
		{
			nb_decomp[i] = nb[j];
			nb_decomp[i + 1] = '\n';
			i = i + 2;
		}
		a = i + len_nb;
		while (i <= a)
		{
			nb_decomp[i] = '0';
			if (i == a - len_nb)
				nb_decomp[i] = '1';
			i++;
		}
		nb_decomp[i] = '\n';
	}
	return (nb_decomp);
}

char	*thou(int i, char *nb_decomp, char *nb, int j)
{
	int a;
	int len_nb;

	len_nb = ft_strlen(nb) - j;
	if (len_nb <= 6 && len_nb >= 4)
	{
		if (nb[j] != '1')
		{
			nb_decomp[i] = nb[j];
			nb_decomp[i + 1] = '\n';
			i = i + 2;
		}
		a = i + len_nb;
		while (i <= a)
		{
			nb_decomp[i] = '0';
			if (i == a - len_nb)
				nb_decomp[i] = '1';
			i++;
		}
		nb_decomp[i] = '\n';
	}
	return (nb_decomp);
}
