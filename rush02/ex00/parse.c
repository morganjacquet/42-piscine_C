/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parse.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 22:45:23 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:41:24 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		count_lines(char *str)
{
	int	count;

	count = 1;
	while (*str)
	{
		if (*str == '\n')
		{
			str++;
			count++;
		}
		else
			str++;
	}
	return (count);
}
void	function(char *numbers, char *texts, char *str)
{
	int i;
	int k;

	k = 0;
	i = 0;
	if (!(numbers = (char *) malloc(sizeof(char *) * 50)))
		write(2,"Error\n", 6);
	if (!(texts = (char *)malloc(sizeof(char *) * 50)))
		write(2,"Error\n", 6);
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\n')
		i++;
	k = 0;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\n')
		numbers[k++] = str[i++];
	texts[k] = '\0';
	while ((str[i] == ':' || str[i] == '\t' ||
				str[i] == ' ') && str[i] != '\n')
		i++;
	k = 0;
	while (((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z')) && str[i] != '\n')
		texts[k++] = str[i++];
	texts[k] = '\0';
	free(numbers);
	free(texts);
	i++;
}
void	parse_line(char *str)
{
	char	*number;
	char	*text;
	int		count;
	int		j;

	number = 0;
	text = 0;
	j = 0;
	count = count_lines(str);
	while (j <= count - 1)
	{
		function(number, text, str);
		j++;
	}
}


