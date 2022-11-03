/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcocci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:49:01 by pcocci            #+#    #+#             */
/*   Updated: 2022/10/05 12:03:38 by pcocci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	nb;
	char	*p;

	if (!nitems || !size)
	{
		nitems = 1;
		size = 1;
	}
	nb = nitems * size;
	p = malloc(nb);
	if (!p)
		return (0);
	else
		ft_bzero(p, nb);
	return (p);
}

/*int main() {
    int *p = NULL;
    int i = 0;

    p = (int *)calloc(10, sizeof *p);
    if (NULL == p) {
        printf("mycalloc returned NULL");

    } else {
        for(i=0; i <= 100; i++) {
            printf("%08X", p[i]);
            if (i % 8 == 7) {
                printf("\n");
            }
        }
        printf("\n");
        free(p);
    }
    return 0;
}*/

/*int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}*/
