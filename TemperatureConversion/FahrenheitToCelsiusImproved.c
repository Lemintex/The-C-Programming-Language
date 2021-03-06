#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

main() {
    printf("Fahr|Celsius\n");
    for (int fahr = LOWER; fahr < UPPER; fahr += STEP) {
        printf("%3d %6.1f\n", fahr, fahrenheitToCelcius(fahr));
    }
}

int fahrenheitToCelcius(int fahr) {
    return 5.0 / 9.0 * (fahr - 32);
}