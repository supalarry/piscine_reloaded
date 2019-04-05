/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 09:48:24 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/11 09:48:25 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}
