/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:52:05 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/04 17:54:47 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  int i;

  i = 122;
  while (i >= 97)
  {
    write(1, &i, 1);
    i--;
  } 
}

/*
int main(void)
{
  ft_print_reverse_alphabet();
  return(0);
}
*/