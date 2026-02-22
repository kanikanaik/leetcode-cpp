#include <stdio.h>
#include <string.h>
#include <ctype.h>

// This function encrypts the text in-place
void encrypt(char *text, int shift)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        // Check if the character is an alphabet letter
        if (isalpha(text[i]))
        {
            // Determine if it's uppercase or lowercase
            char base = isupper(text[i]) ? 'A' : 'a';
            // Apply the shift
            text[i] = (text[i] - base + shift) % 26 + base;
        }
    }
}

int main()
{
    char message[100];
    int shiftKey;

    // Get message from user
    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    // Remove the newline character that fgets adds
    message[strcspn(message, "\n")] = 0;

    // Get shift key from user
    printf("Enter the shift key (1-25): ");
    scanf("%d", &shiftKey);

    // Encrypt the message
    encrypt(message, shiftKey);

    // Print the encrypted message
    printf("Encrypted message: %s\n", message);

    return 0;
}
