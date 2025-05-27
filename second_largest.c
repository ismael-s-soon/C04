#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 2) {
        printf("Il faut au moins deux éléments.\n");
        return 1;
    }

    int max, second, x;
    scanf("%d %d", &max, &second);
    if(max < second) {
        int temp = max;
        max = second;
        second = temp;
    }

    for(int i = 2; i < n; i++) {
        scanf("%d", &x);
        if(x > max) {
            second = max;
            max = x;
        } else if(x > second && x != max) {
            second = x;
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second);
    return 0;
}
