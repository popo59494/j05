/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:23:29 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/12 15:07:43 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] > 64 && str[i] < 123)
	{
		if (str[i] == 91 || str[i] == 92 || str[i] == 93 || str[i] == 94 
			|| str[i] == 95 || str[i] == 96)
			return (0);
		i = i + 1;
		if (str[i] == '\0')
			return (1);
	}
	if (str[0] == '\0')
	   return (1);
	return (0);	
}