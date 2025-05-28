#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int n, i, j, temp; // Déclaration des variables :
                       // n : nombre d'éléments à trier
                       // i, j : indices pour les boucles
                       // temp : variable temporaire pour les échanges

    scanf("%d", &n); // Lecture du nombre d'éléments à trier depuis l'entrée standard

    int t[n]; // Déclaration d’un tableau de taille n pour stocker les entiers

    // Boucle pour lire les n éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]); // Stockage de chaque entier dans le tableau t
    }

    // Début du tri à bulles (Bubble Sort)
    // Cette méthode consiste à comparer les éléments deux à deux
    // et à les échanger s'ils ne sont pas dans le bon ordre

    for(i = 0; i < n - 1; i++) { // Répéter le processus n-1 fois
        for(j = 0; j < n - i - 1; j++) { // Parcourir le tableau jusqu'à l'élément déjà trié
            if(t[j] > t[j + 1]) { // Si l’élément actuel est plus grand que le suivant
                // Échange des deux éléments
                temp = t[j];         // Stocker t[j] temporairement
                t[j] = t[j + 1];     // Déplacer t[j + 1] à la position t[j]
                t[j + 1] = temp;     // Mettre temp (ancien t[j]) à la position t[j + 1]
            }
        }
    }

    // Affichage des éléments triés
    for(i = 0; i < n; i++) {
        printf("%d ", t[i]); // Afficher chaque élément suivi d’un espace
    }

    printf("\n"); // Saut de ligne après l’affichage

    return 0; // Fin du programme avec code de retour 0 (succès)
}
