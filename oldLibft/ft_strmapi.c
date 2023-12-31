/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:35:18 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/21 00:00:40 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f || !new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, (char)s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
