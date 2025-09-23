#include <stdio.h>

int main(void) {
    int a, b, c, d;

    printf("Enter four integers separated by spaces: ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        printf("Invalid input.\n");
        return 1;
    }

    int max = a;
    if (b > max){ max = b;}
    if (c > max){ max = c;}
    if (d > max){ max = d;}

    printf("Greatest: %d\n", max);
    return 0;
}


