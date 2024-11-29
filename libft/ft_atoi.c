/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husamuel <husamuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:39:34 by husamuel          #+#    #+#             */
/*   Updated: 2024/10/29 21:26:34 by husamuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(1);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13)) // Ignora espaços
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result * sign > 2147483647 || result * sign < -2147483648)
			ft_error("Error");
		str++;
	}
	if (*str != '\0')
		ft_error("Error");
	return (result * sign);
}
/*
int main(void)
{
  char *str = "   qwe23";
  printf("%d\n", ft_atoi(str));
  str = "   23";
  printf("%d\n", ft_atoi(str));
}
*/
// Converte uma string em um número inteiro.
