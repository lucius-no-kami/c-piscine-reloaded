/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:07:15 by lucius            #+#    #+#             */
/*   Updated: 2024/11/05 09:16:56 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursive(unsigned int nb, unsigned int i)
{
	if ((i * i) > nb)
		return (0);
	if ((i * i) == nb)
		return (i);
	return (ft_sqrt_recursive(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_recursive(nb, 1));
}
