/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 04:45:46 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/06 04:52:19 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *a / *b;
  *b = temp % *b;
}

/*
int main(void)
{
  int a;
  int b;

  a = 21;
  b = 42;

  ft_ultimate_div_mod(&a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
}
*/