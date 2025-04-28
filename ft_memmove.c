/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:34:13 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 10:34:13 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest,const void *src,int size)
{
    int index;
    unsigned char *source = (unsigned char *)src;
    unsigned char *destination = (unsigned char *)dest;    
    
    if (destination > source && destination < source + size)
    {
        index = size;
        while (index-- > 0)
            destination[index] = source[index];
    }
    else
    {
        index = 0;
        while (index < size)
         {
            destination[index] = source[index];
            index++;
        }
        
        
    }
    return destination;
    
}


// void test_memmove(const char *desc, char *dest1, char *dest2, const char *src, size_t size)
// {
//     printf("\n=== %s ===\n", desc);

//     // Création de copies pour tester les deux versions
//     char buffer1[50], buffer2[50];
//     strcpy(buffer1, dest1);
//     strcpy(buffer2, dest2);

//     // Appel des fonctions
//     memmove(buffer1, src, size);
//     ft_memmove(buffer2, src, size);

//     // Affichage des résultats
//     printf("memmove   : %s\n", buffer1);
//     printf("ft_memmove: %s\n", buffer2);

//     if (strcmp(buffer1, buffer2) == 0)
//         printf("✅ Test réussi !\n");
//     else
//         printf("❌ Erreur, les résultats diffèrent !\n");
// }

// int main() {
//     char buffer1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char buffer2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char buffer3[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char buffer4[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//     // 1. Copie normale (sans chevauchement)
//     char dest1[50] = "-------------------------";
//     char dest2[50] = "-------------------------";
//     test_memmove("Copie normale", dest1, dest2, buffer1, 10);

//     // 2. Copie avec chevauchement (dest > src) → Memmove doit copier en arrière
//     test_memmove("Chevauchement (dest > src)", buffer1 + 5, buffer2 + 5, buffer1, 10);

//     // 3. Copie avec chevauchement (src > dest) → Memmove doit copier en avant
//     test_memmove("Chevauchement (src > dest)", buffer3, buffer4, buffer3 + 5, 10);

//     // 4. Copie avec `n = 0` (ne doit rien modifier)
//     test_memmove("Copie avec n = 0", buffer1, buffer2, buffer1, 0);

//     return 0;
// }
