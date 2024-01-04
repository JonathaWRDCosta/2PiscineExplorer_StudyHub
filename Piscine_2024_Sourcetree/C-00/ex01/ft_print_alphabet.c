/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:41:12 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/04 17:51:36 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
  int i;

  i = 97;
  while (i <= 122)
  {
    write(1, &i, 1);
    i++;
  }
}
/*
int main(void)
{
  ft_print_alphabet();
  return(0);
}
*/