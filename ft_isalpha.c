/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:42:18 by seerel            #+#    #+#             */
/*   Updated: 2024/10/19 11:56:44 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}
