#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbLettres;
    do {
        printf("Veuillez saisir un nombre de lettres (entre 1 et 26) : ");
        scanf("%d", &nbLettres);
    }while(nbLettres <= 1 || nbLettres >= 26);

    int taille = nbLettres * 2 - 1;

    char grille[taille][taille];

    for (int i = 0 ; i < nbLettres ; i++){
        char lettre = 'a' + i;

        for(int j = i ; j < taille - i ; j++){
            grille[i][j] = lettre;
            grille[j][i] = lettre;
            grille[taille - 1 - i][j] = lettre;
            grille[j][taille - 1 - i] = lettre;
        }
    }

    for (int i = 0 ; i < taille ; i++){
        for(int j = 0 ; j < taille ; j++){
            printf("%c", grille[i][j]);
        }
        printf("\n");
    }
    return 0;
}
