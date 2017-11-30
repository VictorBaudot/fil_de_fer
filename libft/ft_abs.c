/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:09:20 by vbaudot           #+#    #+#             */
/*   Updated: 2017/11/11 08:58:55 by vbaudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_abs(int n)
{
	long	p;

	p = n;
	if (p < 0)
		return (-p);
	else
		return (p);
}