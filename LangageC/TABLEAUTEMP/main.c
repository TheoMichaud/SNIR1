#include <stdio.h>
#include <stdlib.h>

#define NBMAXJOURS 31

int main()
{
    float temperature[NBMAXJOURS];
    int numerodeJour;

    float mini;
    float maxi;

    //INITIALISATION DES TEMPS
    for (numerodeJour=0; numerodeJour<NBMAXJOURS; numerodeJour++)
    {
        temperature[numerodeJour]=(float)((3*(numerodeJour+1))%50);
    }

    printf("Affichage des températures \n");
    for (numerodeJour=0; numerodeJour<NBMAXJOURS; numerodeJour++)
    {
        printf("Jour %d : %.2f °C \n",numerodeJour+1,temperature[numerodeJour]);
    }
    //RECHERCHE DU MIN ET DU MAX
    mini=temperature[0];
    maxi=temperature[0];
    for (numerodeJour=0; numerodeJour<NBMAXJOURS; numerodeJour++)
    {
        if(temperature[numerodeJour]<mini)
        {
            mini=temperature[numerodeJour];
        }
        if(temperature[numerodeJour]>maxi)
        {
            maxi=temperature[numerodeJour];
        }

    }
 printf("Affichage MAX : %.2f \n",maxi);
 printf("Affichage MINI : %.2f \n",mini);

    return 0;
}
