/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbravo <jbravo@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:19:30 by jbravo            #+#    #+#             */
/*   Updated: 2022/12/18 21:19:42 by jbravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (s[0] != '\0')
	{
		write(fd, &s[0], 1);
		s++;
	}
}
// int main(void)
// {
//     ft_putstr_fd("hello", 1);
//     return (0);
// }