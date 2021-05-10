/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:13:03 by yongjule          #+#    #+#             */
/*   Updated: 2021/05/09 20:33:56 by yongjule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	if (dst == NULL)
		return (0);
	idx = 0;
	while (idx < dstsize && (*(src + idx) != 0))
	{
		*(dst + idx) = *(src + idx);
		idx++;
	}
	if (idx < dstsize)
		*(dst + idx) = *(src + idx);
	else if (idx != 0)
		*(dst + idx - 1) = '\0';
	return (ft_strlen(src));
}

#include <string.h>
int main()
{
	ft_strlcpy(NULL, NULL, 10);
	write(1, "1\n", 2);
	strlcpy(NULL, NULL, 10);
}
