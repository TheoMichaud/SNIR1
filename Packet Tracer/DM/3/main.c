#include <stdio.h>
#include <stdlib.h>

int main()
{
     long valeur1, valeur2, somme;
    printf("Veuillez entrer la valeur n°1 :\n");
    scanf("%ld", &valeur1);
    printf("Veuillez entrer la valeur n°2 :\n");
    scanf("%ld", &valeur2);

    somme= valeur1+valeur2;
    printf("La somme %d + %d = %d", valeur1, valeur2, somme);
    return 0;
}
