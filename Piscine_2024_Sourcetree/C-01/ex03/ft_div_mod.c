/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:08:13 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/06 04:45:19 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

/*

int main(void)
{
  int a;
  int b;

  a = 42;
  b = 21;

  ft_div_mod(a, b, &a, &b);
  printf("%d\n", a);
  printf("%d\n", b);
  return(0);
}
*/