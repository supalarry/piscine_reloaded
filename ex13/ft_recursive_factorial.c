/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 18:32:21 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/08 18:32:23 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	if (nb == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
