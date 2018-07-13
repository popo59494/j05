/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:21:59 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/12 12:03:45 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = (n-1);
	while (s1[i] != '\0' && i <= k)
		i = i + 1;
	while (s2[j] != '\0' && j <= k)
		j = j + 1;
	if (i > j)
		return (1);
	if (i < j)
		return (-1);
	else return (0);
}
