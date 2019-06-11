#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nom[50],prenom[50];
    char genre;
    int age;
    float taille,poids;
    printf("Quel est votre prenom?");
    scanf("%s", &prenom);
    printf("Quel est votre nom?");
    scanf("%s", & nom);
    printf("Quel est votre age?");
    scanf("%d", &age);
    printf("Quel est votre poids?");
    scanf("%f", &poids);
    printf("Quel est votre taille?");
    scanf("%f", &taille);
    printf("Êtes vous un homme ou un femme (h/f)?\n");
    scanf("%s", &genre);

    printf(" nom: %s\n prenom: %s\n age: %d ans\n poids: %f kg\n taille: %f m\n genre: %c\n",nom,prenom,age,poids,taille,genre);
    return 0;
}
