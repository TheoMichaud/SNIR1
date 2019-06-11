#include <stdio.h>
#include <stdlib.h>

int main()
{
char lettre1;
char lettre2;

int decalage;

    printf("Veuillez saisir 2 lettres: \n");
    scanf("%s", &lettre1);

printf("2 ème valeur: \n");
    scanf("%s", &lettre2);

    decalage=lettre2-lettre1;

    printf("Déclage entre les 2 lettres: %d", decalage);
    return 0;
}
