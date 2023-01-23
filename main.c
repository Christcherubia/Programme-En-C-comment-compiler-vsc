#include <stdio.h>
#include <stdlib.h>

// cette fonction prend deux paramètres :
// int argc : qui est un entier qui indique le nombre d'arguments passés au programme lors de son exécution.
// const char *argv[] : qui est un tableau de chaînes de caractères qui contient les arguments passés au programme lors de son exécution.
int main(int argc, const char *argv[])
{
    printf("Helo World!\n");
    return 0;
}

// cette fonction est le code, le plus minimal pour afficher un message à l'écran
int main()
{
    printf("Bonjour à tous");
    return 0;
}
// si l'on veut écrire correctement le "à" voici des exemples de comment il faut s'y prendre :
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    printf("à\n");
    printf("\u00E0\n");
    printf("%ls\n", L"à");
    return 0;
}