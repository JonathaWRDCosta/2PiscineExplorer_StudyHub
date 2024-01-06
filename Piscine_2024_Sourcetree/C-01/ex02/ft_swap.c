/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:52:22 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/05 19:07:38 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}


/*
int main(void)
{
  int a;
  int *pA;
  int b;
  int *pB;

  a = 21;
  b = 42;

  pA = &a;
  pB = &b;
  printf("Valores de A e B antes de chamar a função swap\n");
  printf("A: %d e B: %d\n", a, b);

  ft_swap(pA, pB);
  printf("Valores de A e B depois de chamar a função swap\n");
  printf("A: %d e B: %d\n", a, b);  

}
*/