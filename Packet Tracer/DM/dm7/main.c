#include <stdio.h>
#include <stdlib.h>

int main()
{
int jour, mois, annee,choix;
char nom[49], prenom[49];
do{
    printf("Veuillez entrer date de naissance\n");

printf("le jour:");
    scanf("%d", &jour);
    printf("le mois:");
    scanf("%d", &mois);
    printf("l'année: ");
    scanf("%d", &annee);
}while(annee>2017 || mois<1 || mois>12 || jour<1 || jour>31 );
printf("jour de naissance : %d \n mois de naissance : %d\n annee de naissance : %d\n votre date de naissanceest le : %d/%d/%d \n", jour,mois, annee, jour,mois, annee);


printf("votre nom et prenom:\n");
    scanf("%s", &nom);
    scanf("%s", &prenom);

printf("votre nom: %s \n votre prenom: %s\n Bonjour %s %s \n", nom , prenom, prenom,nom);

if(annee> 1999){
printf("vous etes autorisé à passer\n");
}else{
printf("désolé vous êtes trop jeunes.\n");
}

printf("Format d'affichage de votre date de naissance: \n 1- jj/mm/aaaa \n 2- jj-mm-aaaa \n 3- jj:mm:aaaa \n 4- jj.mm.aaaa \n Choisissez le format d'affichage (1,2,3 ou 4) : \n");
    scanf("%d",&choix);

    switch(choix){

    case 1:
printf("%d/%d/%d\n",jour,mois, annee);
    break;

      case 2:
printf("%d-%d-%d\n",jour,mois, annee);
    break;

    case 3:
printf("%d:%d:%d\n",jour,mois, annee);
    break;

    case 4:
printf("%d.%d.%d\n",jour,mois, annee);
    break;
    }

    return 0;
}
