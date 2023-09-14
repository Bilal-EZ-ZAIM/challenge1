#include <stdio.h>
#include <string.h>

// Challenge 1 : Affichage Informations
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ====================== Challenge 1 : Affichage Informations =====================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    char nome[15], prenome[15], numero[11];
    int age, sexe;
    printf("écrivez votre nom : ");
    scanf("%s", &nome);
    printf("écrivez votre prénom :");
    scanf("%s", &prenome);
    printf("écrivez votre numéro de téléphone :");
    scanf("%s", &numero);
    printf("écrivez votre Age : ");
    scanf("%d", &age);
    printf("1 . mâle \n");
    printf("2 . féminin \n");
    printf("Quel est votre sexe ? \n");
    scanf("%d", &sexe);

    printf("Voter nom est : %s\n", nome);
    printf("Voter prénom est  : %s\n", prenome);
    printf("Voter numéro de téléphone est : %s\n", numero);
    printf("Voter nom est : %d\n", age);
    switch (sexe)
    {
    case 1:
        printf("votre sexe  est male\n");
        break;
    case 2:
        printf("votre sexe  est féminin\n");
        break;
    default:
        printf("voila le numéro est faux \n");
        break;
    }

    return 0;
}