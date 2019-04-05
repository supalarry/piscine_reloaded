/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:19:41 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/08 17:30:09 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char one;

	one = '0';
	while (one <= '9')
	{
		ft_putchar(one);
		one++;
	}
}
