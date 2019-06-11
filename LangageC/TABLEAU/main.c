#include <stdio.h>
#include <stdlib.h>

#define NBELEVES 2

int main()
{
    float notes[NBELEVES];
    int indice;
    float somme =0;
    float moyenne;

    for (indice=0; indice<NBELEVES; indice++)
    {
        printf("Donnez la note de l'élève %d :",indice+1);
        scanf("%f",&notes[indice]);
        somme=somme+notes[indice];
    }
    printf("Affichage des notes\n");
    for (indice=0; indice<NBELEVES; indice++)
    {
        printf("La note de l'élève %d est %.2f/20\n",indice+1,notes[indice]);
    }

    printf("La moyenne des notes est de %.2f /20\n",somme/NBELEVES);



    return 0;
}
