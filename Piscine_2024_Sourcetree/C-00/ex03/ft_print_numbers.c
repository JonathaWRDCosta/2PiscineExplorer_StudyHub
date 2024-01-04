/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:55:00 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/04 18:00:50 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
  int i;

  i = '0';
  while (i <= '9')
  {
    write(1, &i, 1);
    i++;
  }
}

/*
int main(void)
{
  ft_print_numbers();
  return(0);
}
*/