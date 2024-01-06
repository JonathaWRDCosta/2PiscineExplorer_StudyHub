/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 02:58:46 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/05 03:32:11 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    write(1, "-2147483648", 11);
  }
  else if (nb < 0)
  {
    ft_putchar('-');
    nb = -nb;
    ft_putnbr(nb);
  }
  else if (nb > 9)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else if (nb >= 0 && nb <= 9)
  {
    ft_putchar(nb + '0');
  }
}

/*
int main(void)
{
  ft_putnbr(-2147483648);
  write(1, "\n", 2);
  ft_putnbr(2147483647);
  write(1, "\n", 2);
  ft_putnbr(0);
  write(1, "\n", 2);
  ft_putnbr(123);
  write(1, "\n", 2);
  ft_putnbr(9);
  write(1, "\n", 2);
  ft_putnbr(-1);
  write(1, "\n", 2);
  ft_putnbr(76543);
  write(1, "\n", 2);
}
*/