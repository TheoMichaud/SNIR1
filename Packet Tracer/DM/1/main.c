#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rayon, abscisse, ordonnee;

    printf("Veuillez entrer les infos à propos du cercle.\n");
    printf("Son rayon :\n");
    scanf("%d", &rayon);
    printf("Son abscisse :\n");
    scanf("%d", &abscisse);
    printf("Son ordonnée :\n");
    scanf("%d", &ordonnee);

    printf("Vous avez crée un cercle de rayon de %d cm, d'ordonné %d et d'abscisse %d", rayon, ordonnee, abscisse);
    return 0;
}
