#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

char generate_random_char() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

int main() {
    // Seed the random number generator with the current time.
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    memset(password, 0, sizeof(password));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
    }

    printf("%s\n", password);

    return 0;
}

