/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:11:50 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/05 02:45:38 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb(void)
{
  int i;
  int j;
  int k;

  i = '0';
  while (i <= '7')
  {
    j = i + 1;
    {
      while (j <= '8')
      {
        k = j + 1;
        while (k <= '9')
        {
          ft_putchar(i);
          ft_putchar(j);
          ft_putchar(k);
          if (i != '7')
            write(1, ", ", 2);
          k++;
        }
        j++;
      }
      i++;
    }
  }
}

/*
int main(void)
{
  ft_print_comb();
  return(0);
}
*/