#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - a program that generates random valid password
 *
 * Return: Always 0.
 */


#define PASSWORD_LENGTH 10



int main() {
    // Define a character set from which to generate passwords.
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Seed the random number generator with the current time.
    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(charset) - 1);
        putchar(charset[index]);
    }

    putchar('\n');

    return 0;
}

