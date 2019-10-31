/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cserain <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 17:08:50 by cserain      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:08:29 by cserain     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*bil(int i, char *nb_decomp, char *nb, int j);

char	*mil(int i, char *nb_decomp, char *nb, int j);

char	*thou(int i, char *nb_decomp, char *nb, int j);

char	*sent(int i, char *nb_decomp, char *nb, int j)
{
	int a;
	int len_nb;

	len_nb = ft_strlen(nb) - j;
	if (len_nb == 3)
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

char	*diz(int i, char *nb_decomp, char *nb, int j)
{
	int a;
	int len_nb;

	len_nb = ft_strlen(nb) - j;
	if (len_nb == 2)
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

char	*unit(int i, char *nb_decomp, char *nb, int j)
{
	int a;
	int len_nb;

	len_nb = ft_strlen(nb) - j;
	if (len_nb == 1)
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

char	*ft_convert(char *nb)
{
	int		len_nb;
	char	*nb_decomp;
	int		j;

	len_nb = ft_strlen(nb);
	j = 0;
	nb_decomp = bil(0, nb_decomp, nb, j);
	if (len_nb == 10)
		j += 1;
	nb_decomp = mil((ft_strlen(nb_decomp) - 1), nb_decomp, nb, j);
	if (len_nb >= 7)
		j += 3;
	nb_decomp = thou((ft_strlen(nb_decomp) - 1), nb_decomp, nb, j);
	if (len_nb >= 6)
		j += 3;
	nb_decomp = sent((ft_strlen(nb_decomp) - 1), nb_decomp, nb, j);
	if (len_nb == 3)
		j += 1;
	nb_decomp = diz((ft_strlen(nb_decomp) - 1), nb_decomp, nb, j);
	if (len_nb == 2)
		j += 1;
	nb_decomp = unit((ft_strlen(nb_decomp) - 1), nb_decomp, nb, j);
	return (nb_decomp);
}
