/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:20:22 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/06 04:45:27 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
  *nbr = 42;
}

/*
int main(void)
{
  int i;
  int *pI;

  i = 21;
  pI = &i;
  printf("Valor de I antes de chamar a função.\n");
  printf("%d\n", i);

  ft_ft(pI);
  printf("Valor de I depois de chamar a funçãõ\n");
  printf("%d\n", i);
  return(0);
}
*/