/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 18:53:44 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/08 18:53:46 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int res;

	i = 1;
	res = 0;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (res < nb && i <= 46340)
	{
		res = i * i;
		if (res == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
