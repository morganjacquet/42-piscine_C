/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 01:20:42 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 23:13:41 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

char	*parse_line(char *str);

int		check_arg(int argc, char **argv)
{
	if (argc < 2 && argc > 3)
	{
		write(2, "Error", 5);
		return (1);
	}
	if ((argc == 2 && argv[1] < 0) && (argc == 3 && argv[2] < 0))
	{
		write(2, "Error", 5);
		return (1);
	}
	return (0);
}

int		check_file(int exit)
{
	if (exit < 0)
	{
		write(2, "Error", 5);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		file;
	int		exit;
	char	data[2048];
	char	*dict;

	check_arg(argc, argv);
	if (argc == 3)
		dict = argv[1];
	else
		dict = "nubers.dict";
	file = open(dict, O_RDONLY);
	exit = read(file, data, 2048);
	check_file(exit);
	data[exit] = '\0';
	parse_line(data);
	return (0);
}
