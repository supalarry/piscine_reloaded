/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 14:24:20 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/09 14:24:22 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int size;
	int *numbers;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	numbers = (int *)malloc(sizeof(int) * size);
	if (numbers == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	return (numbers);
}
