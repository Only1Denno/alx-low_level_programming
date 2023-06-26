#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomCharacter() {
    // Generates a random character from the set of alphanumeric characters
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generateRandomPassword(char *password) {
    // Generates a random password of the specified length
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomCharacter();
    }
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1];
    generateRandomPassword(password);

    printf("Generated Password: %s\n", password);

    return 0;
}

