/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 09:57:00 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/09 09:57:02 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print(char **arr, int len)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < len)
	{
		while (arr[i][j] != '\0')
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		swap;
	char	*temp;

	i = 1;
	swap = 2;
	while (swap != 0)
	{
		swap = 0;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
		i = 1;
	}
	ft_print(argv, argc);
	return (0);
}
