/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 02:46:31 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/05 03:22:00 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb2(void)
{
  int i;
  int j;

  i = 0;
  while (i <= 98)
  {
    j = i + 1;
    while (j <= 99)
    {
      ft_putchar((i / 10) + '0');
      ft_putchar((i % 10) + '0');
      ft_putchar(' ');
      ft_putchar((j / 10) + '0');
      ft_putchar((j % 10) + '0');
      if (i != 98)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      j++;
    }
    i++;
  }
}

/*
int main(void)
{
  ft_print_comb2();
  return(0);
}
*/