/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:21:45 by zel-hach          #+#    #+#             */
/*   Updated: 2021/11/25 19:15:12 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*p;
	size_t	i;

	i = 0;
	if (elementCount == 0)
		elementCount = 1;
	if (elementSize == 0)
		elementSize = 1;
	p = malloc (elementCount * elementSize);
	if (!p)
		return (NULL);
	else if (p)
	{
		ft_bzero(p, elementSize * elementCount);
	}
	return (p);
}
 int main()
 {
	 int i;
	 i = 0;

	 int *tab;
	  tab = calloc(10,sizeof(int));
	  while(tab[i]<=10)
	  {
		  tab[i]=i;
		  i++;
	  }
	  printf("%d\n",tab[i]);
 }