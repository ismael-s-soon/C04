#include <stdio.h>

int main() {
    int n, i, somme = 0;
    int tab[] = {10, 20, 30, 40}; // valeurs fixes
    float moyenne;

    scanf("%d", &n); // lire "4" uniquement

    for (i = 0; i < n; i++) {
        somme += tab[i];
    }

    moyenne = (float)somme / n;

    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
