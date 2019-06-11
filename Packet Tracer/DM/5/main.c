#include <stdio.h>
#include <stdlib.h>

int main()
{
int place;
char lettre;


    printf("Veuillez choisir une lettre.\n ");
    scanf("%c", &lettre);

place=lettre-'a';
if(lettre=='a'){
place=1;
}else{
place=place+1;
}
printf("%d", place);




    return 0;
}
