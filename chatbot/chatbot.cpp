#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char user_input[100];

    printf("Welcome! How can I help you today?\n");

    while (1) {
        printf("You: ");
        fgets(user_input, 100, stdin);

        // Convert user input to lowercase for easier comparison
        for (int i = 0; user_input[i]; i++) {
            user_input[i] = tolower(user_input[i]);
        }

        // Check for specific keywords and provide responses
        if (strstr(user_input, "hello") != NULL) {
            printf("Chatbot: Hello there!\n");
        }
        else if (strstr(user_input, "how are you") != NULL) {
            printf("Chatbot: I'm just a program, but thanks for asking!\n");
        }
        else if (strstr(user_input, "bye") != NULL) {
            printf("Chatbot: Goodbye! Have a great day.\n");
            break;
        }
        else {
            printf("Chatbot: I'm not sure how to respond to that.\n");
        }
    }

    return 0;
}