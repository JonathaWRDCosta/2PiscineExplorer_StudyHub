/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:01:10 by jonatha           #+#    #+#             */
/*   Updated: 2024/01/04 18:11:29 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

void ft_is_negative(int n)
{
  if (n < 0)
  {
    write(1, "N", 1);
  }
  else
  {
    write(1, "P", 1);
  }
}

/*
int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write(1, "Usage: ./out <Integer>\n", 24);
    return(1);
  }
  
  int number = atoi(argv[1]);
  ft_is_negative(number);

  return(0);
}
*/