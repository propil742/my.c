#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int done() {
    printf("[ Program has been ended, press Enter to close it. ]\n");
    while (getchar() != '\n');
    getchar();
    return 0;
}

int main() {
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int tries = 0;
    int guess;
    printf("guess the number bro\n");
    do {
        printf("my guess is ");
        scanf(" %d", &guess);
        //printf(" %d\n", secret);
        if (guess < secret) {
            tries ++;
            printf("too low\n");
        } else if (guess > secret) {
            tries ++;
            printf("too high\n");
        } else {
            printf("right!!! its %d\n", secret);
            printf("it took you %d tries\n", tries);
            
        }
    } while (secret != guess);
    done();
    return 0;
    
}