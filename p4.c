#include <stdio.h>

void greetUser() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}

void showMenu() {
    printf("\nMenu:\n");
    printf("1. Greet User\n");
    printf("2. Exit\n");
}

int main() {
    printf("Welcome to DevOps C App\n");
    
    int choice;
    showMenu();
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        greetUser();
    } else {
        printf("Exiting...\n");
    }

    return 0;
}
