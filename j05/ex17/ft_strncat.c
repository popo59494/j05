/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:46:56 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/14 00:15:55 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i = i + 1;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
