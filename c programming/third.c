#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));

    int min = 1;
    int max = 100;
    int randomNumber = min + rand() % (max - min + 1);

    printf("Random number: %d\n", randomNumber);
    return 0;
}
